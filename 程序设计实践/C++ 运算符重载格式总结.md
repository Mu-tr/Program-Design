# C++ 运算符重载格式总结

---

## 一、通用格式

### 1. 重载为**成员函数**

| 类别     | 签名格式                                                     |
| -------- | ------------------------------------------------------------ |
| 双目     | `ReturnType operator@(const Other& rhs)`                     |
| 单目前置 | `ReturnType operator@()`                                     |
| 单日后置 | `ReturnType operator@(int)` — `int` 是哑参数，用于区分前后置 |

```cpp
// 双目 — 以 + 为例（成员函数）
class Complex {
public:
    Complex operator+(const Complex& rhs) const {
        return Complex(real + rhs.real, imag + rhs.imag);
    }
};
```

### 2. 重载为**非成员函数**

```cpp
// 双目 — 以 + 为例（非成员）
Complex operator+(const Complex& lhs, const Complex& rhs) {
    return Complex(lhs.real + rhs.real, lhs.imag + rhs.imag);
}
```

### 3. 重载为**友元函数**

签名与非成员相同，但在类内声明 `friend`，用于需要访问私有成员且第一个参数不是 `*this` 的场景（典型如流运算符）。

```cpp
class Complex {
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};
```

---

## 二、特殊运算符 — 逐个举例

### ① `operator=` 赋值运算符

**必须是成员函数**，不能继承，编译器会生成默认版本。需要处理自赋值、资源管理。

```cpp
class String {
public:
    String& operator=(const String& other) {
        if (this != &other) {          // 自赋值检查
            delete[] data;
            data = new char[other.len + 1];
            std::copy(other.data, other.data + other.len + 1, data);
            len = other.len;
        }
        return *this;                  // 返回 *this，支持链式赋值
    }
};
```

---

### ② `operator[]` 下标运算符

**必须是成员函数**。通常返回引用，以允许 `obj[i] = value`。

```cpp
class Array {
    int arr[100];
public:
    int& operator[](size_t idx) {          // 读写版本
        return arr[idx];
    }
    const int& operator[](size_t idx) const { // 只读版本
        return arr[idx];
    }
};
```

---

### ③ `operator()` 函数调用运算符（仿函数 / Functor）

**必须是成员函数**。参数个数不限，可以重载多个版本。

```cpp
struct Adder {
    int operator()(int a, int b) const {
        return a + b;
    }
};
// 使用
Adder add;
int result = add(3, 4);   // 像函数一样调用
```

---

### ④ `operator->` 箭头运算符（智能指针核心）

**必须是成员函数**。返回的类型必须支持 `->`（指针或同样重载了 `->` 的对象）。

```cpp
template<typename T>
class SmartPtr {
    T* ptr;
public:
    T* operator->() const { return ptr; }
};
// 使用: sp->method() 等价于 (sp.operator->())->method()
```

---

### ⑤ `operator<<` / `operator>>` 流运算符

**必须是非成员函数**（因为左操作数是 `ostream`，不是你的类）。通常声明为 `friend`。

```cpp
class Point {
    int x, y;
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};
std::ostream& operator<<(std::ostream& os, const Point& p) {
    return os << '(' << p.x << ", " << p.y << ')';
}
std::istream& operator>>(std::istream& is, Point& p) {
    return is >> p.x >> p.y;
}
```

---

### ⑥ `operator++` / `operator--` 前置与后置

后置用哑参数 `int` 区分，**必须返回旧值的副本**（因为先拷贝再自增）。

```cpp
class Counter {
    int val = 0;
public:
    Counter& operator++() {       // 前置 ++c
        ++val;
        return *this;
    }
    Counter operator++(int) {     // 后置 c++，int 是哑参数
        Counter tmp = *this;
        ++(*this);
        return tmp;               // 返回旧值
    }
};
```

---

### ⑦ `operator T()` 类型转换运算符

**无返回类型**（返回类型就是运算符名本身）。可以加 `explicit`（C++11 起）避免隐式转换。

```cpp
class Rational {
    int num, den;
public:
    explicit operator double() const {    // explicit 防止意外的隐式转换
        return static_cast<double>(num) / den;
    }
};
```

---

### ⑧ `operator""_suffix` 用户定义字面量

**必须是命名空间作用域（非成员）**。后缀以下划线开头（无下划线的留给标准库）。

```cpp
// 原始字面量：接收 const char*
long double operator""_km(long double len) {
    return len * 1000.0;
}
// 使用
auto dist = 3.5_km;   // 3500.0
```

---

### ⑨ `operator new` / `operator delete` — 全局或类专属

```cpp
class Widget {
public:
    void* operator new(size_t sz) {
        std::cout << "自定义分配 " << sz << " 字节\n";
        return std::malloc(sz);
    }
    void operator delete(void* ptr) noexcept {
        std::cout << "自定义释放\n";
        std::free(ptr);
    }
};
```

---

### ⑩ `operator<=>` 三路比较（C++20 宇宙飞船运算符）

编译器可以自动生成 `==`, `!=`, `<`, `<=`, `>`, `>=`。默认是逐个成员按声明顺序比较。

```cpp
class Point {
    int x, y;
public:
    auto operator<=>(const Point&) const = default;  // 一行生成全部比较运算符
};
```

返回类型：
- `std::strong_ordering` — 全序（可替代 ==）
- `std::weak_ordering` — 偏序
- `std::partial_ordering` — 部分序（如浮点数 NaN）

---

### ⑪ `operator co_await`（C++20 协程）

用于让一个类型变成可 `co_await` 的对象。

```cpp
struct MyAwaiter {
    bool await_ready() { return false; }
    void await_suspend(std::coroutine_handle<>) { /* 调度逻辑 */ }
    int await_resume() { return 42; }
};

struct Awaitable {
    MyAwaiter operator co_await() { return MyAwaiter{}; }
};
```

---

## 快速对照表

| 运算符             | 必须成员 | 可以非成员 | 特殊点                   |
| ------------------ | -------- | ---------- | ------------------------ |
| `=` `[]` `()` `->` | ✅        | ❌          | 语法规定                 |
| `++` / `--` 后置   | ❌        | ✅          | `int` 哑参数区分         |
| `<<` `>>` 流       | ❌        | ✅          | 左操作数是 `ostream`     |
| `T()` 类型转换     | ✅        | ❌          | 无返回类型               |
| `""_suffix`        | ❌        | ✅          | 后缀以下划线开头         |
| `new` `delete`     | ❌        | ✅          | 返回 `void*`             |
| `<=>` (C++20)      | ❌        | ✅          | `= default` 自动生成全套 |
| `co_await` (C++20) | ✅        | ❌          | 返回 Awaiter 对象        |
| 其他双目/单目      | ❌        | ✅          | 非成员可保持对称性       |