# Python 考前复习知识点总结

> 根据当前文件夹下全部 85 个 `.py` 文件整理。部分源文件中的中文字符串存在编码乱码，本资料只提取代码中实际涉及的 Python 语法、数据类型、函数和常用库用法，适合考前快速复习。

## 一、代码涉及的语法知识总表

| 板块 | 涉及知识点 | 代码中出现的典型写法 | 考前复习重点 |
|---|---|---|---|
| 基本输入输出 | 控制台输入、输出、多参数输出、`end` 控制结尾 | `input()`、`print(a, b)`、`print(x, end=",")` | `input()` 返回字符串；需要数值计算时要用 `int()`、`float()`、`eval()` 或 `map()` 转换。 |
| 数据类型转换 | 字符串、整数、浮点数、列表转换 | `int(input())`、`float(input())`、`list(input().split())`、`map(int, input().split())` | 注意 `map()` 返回可迭代对象，常与多个变量赋值或 `list()` 搭配。 |
| 表达式与运算符 | 算术、整除、取余、幂、比较、逻辑运算 | `+ - * / // % **`、`and`、`or`、`not`、`==`、`!=`、`is`、`in` | `//` 是整除，`%` 常用于判偶数、闰年、最大公约数；`is` 判断对象身份，`==` 判断值相等。 |
| 赋值语句 | 普通赋值、链式赋值、多变量赋值、增强赋值 | `a = 1`、`x, y = y, x`、`sum += z`、`a *= 2` | 多变量赋值可用于交换变量；增强赋值常用于循环累计。 |
| 字符串格式化 | f-string、`format()`、百分号格式化 | `f"{x:.2f}"`、`"{:.2f}".format(avg)`、`"%.4f" % x` | 掌握小数位控制：`:.2f`、`%.2f`；f-string 是考试中最常见的可读写法。 |
| 条件分支 | 单分支、双分支、多分支、嵌套分支 | `if`、`elif`、`else`、嵌套 `if` | 条件表达式要返回布尔值；多分支从上往下匹配，先满足先执行。 |
| 条件表达式 | 三元条件表达式 | `a = x if 条件 else y` | 适合简单二选一赋值，复杂逻辑仍建议使用 `if...else`。 |
| 循环结构 | `for` 循环、`while` 循环、无限循环 | `for i in range(n)`、`while True:`、`while 条件:` | `for` 适合次数确定；`while` 适合条件控制或不确定次数。 |
| 循环控制 | 跳出、跳过本轮 | `break`、`continue` | `break` 结束整个循环；`continue` 跳过本轮进入下一轮。 |
| range 序列 | 起点、终点、步长 | `range(4)`、`range(1,14,3)`、`range(15,2,-4)` | `range(start, stop, step)` 不包含 `stop`；负步长可倒序。 |
| 列表基础 | 创建、索引、嵌套、修改、追加、插入、删除 | `a[1]`、`a[-1]`、`a[4][0][1]`、`append()`、`insert()`、`remove()` | 列表可变；索引从 0 开始；负索引从末尾开始。 |
| 列表切片 | 正向切片、反向切片、步长切片、复制 | `v[::-1]`、`v1[0:5]`、`a[:]`、`coins[:]` | 切片格式 `[start:stop:step]`；`a[:]` 是浅拷贝。 |
| 列表推导式 | 单层推导、带条件推导、嵌套推导 | `[x for x in range(...)]`、`[x for x in range(...) if 条件]`、`[suit + rank for suit in suits for rank in ranks]` | 列表推导式本质是简洁的 `for` 循环；可读性差时应拆成普通循环。 |
| 二维列表 | 嵌套列表、二维矩阵初始化 | `[[0 for i in range(4)] for j in range(3)]` | 复习二维列表访问 `m[row][col]`；避免用 `[[0]*4]*3` 造成行共享。 |
| 元组 | 元组创建、不可变性、比较 | `("Python", 1, 2)`、`peter = (...)` | 元组不可原地修改；重新赋值只是让变量指向新对象。 |
| 字典 | 创建、增删改查、遍历、合并、统计词频 | `GDP["UK"] = 2.59`、`del GDP["DE"]`、`count.get(i, 0) + 1` | 字典按键访问；`get()` 可避免键不存在时报错；常用于计数。 |
| 字符串处理 | 大小写、分割、连接、去空白、对齐、字符编码转换 | `lower()`、`split()`、`join()`、`strip()`、`ord()`、`chr()` | 字符串不可变；`split()` 得列表，`join()` 把字符串序列连接回字符串。 |
| 序列比较 | 字符串、列表、元组比较 | `'a' < 'b'`、`a > b`、`c < d` | 序列比较按字典序逐项比较；字符串比较依据 Unicode 编码。 |
| 排序 | 内置排序、原地排序、反向排序、自定义键 | `sorted(list)`、`list.sort()`、`reverse=True`、`key=lambda x: ...` | `sorted()` 返回新列表；`sort()` 修改原列表；`key` 决定排序依据。 |
| 函数定义 | 无参函数、有参函数、返回值 | `def main():`、`def costCompute(iStart, iEnd): return ...` | 函数用 `def` 定义；`return` 结束函数并返回结果。 |
| 默认参数 | 参数有默认值 | `def isPass(score, n=60):` | 默认参数放在非默认参数后面；调用时可省略。 |
| 可变参数 | 任意数量位置参数 | `def calc(*x):` | `*x` 在函数内部是元组，适合求和等不定参数场景。 |
| 关键字参数 | 任意数量关键字参数 | `def key(sName="Peter", **course):` | `**course` 在函数内部是字典，可用 `.items()`、`.values()` 遍历。 |
| 函数作为参数 | 高阶函数思想 | `connect(f1, 0, 2, 100)`、`connect(f2, -1, 1, 100)` | 函数名可作为对象传入另一个函数；调用时写 `f(x)`。 |
| 变量作用域 | 局部变量、全局变量、`global` | `global a, ans, ANS`、`global cnt, vis, s` | 函数内修改全局变量要声明 `global`；一般优先用参数和返回值传递数据。 |
| 递归 | 基例、递归链条 | 组合数、数字拆分、归并排序、找假币、DFS | 递归必须有结束条件；递归题要先写“基例”，再写“递归式”。 |
| 算法思想 | 枚举、模拟、筛法、最大子段和、欧几里得算法、归并排序、DFS | 多重 `for`、`while`、`merge_sort()`、`dfs()` | 考试中常要求把循环、条件和列表结合起来解决实际问题。 |
| 模块导入 | 普通导入、别名导入、选择导入 | `import math`、`import numpy as np`、`from math import ceil` | `import 模块` 后用 `模块.函数()`；`from 模块 import 函数` 可直接调用函数。 |
| 主程序入口 | 判断当前文件是否直接运行 | `if __name__ == "__main__":` | 被导入时不执行主程序，直接运行时执行主程序。 |
| 文件操作 | 文本读写、二进制读写、上下文管理器 | `with open(...) as f:`、`readlines()`、`writelines()` | `with` 会自动关闭文件；文本文件可指定 `encoding="utf-8"`。 |
| JSON 与 pickle | 结构化数据保存和读取 | `json.dump()`、`json.load()`、`pickle.dump()`、`pickle.load()` | JSON 适合跨语言文本数据；pickle 是 Python 专用二进制序列化。 |
| 面向对象 | 类、对象、构造方法、实例属性、类属性 | `class Pet:`、`__init__()`、`self.x`、`iSides = 6` | 类是模板，对象是实例；实例方法第一个参数通常是 `self`。 |
| 封装 | 私有属性、访问方法 | `self.__sName`、`getName()` | 双下划线属性会触发名称改写；通常通过方法访问。 |
| 继承与多态 | 父类、子类、方法重写 | `class Rabbit(Pet):`、`speak()`、`eat()` | 子类继承父类属性和方法，也可以重写同名方法。 |
| 魔术方法 | 对象字符串表示、运算符重载、比较重载 | `__str__`、`__repr__`、`__add__`、`__sub__`、`__lt__` | 魔术方法让自定义类支持 `print()`、`+`、`-`、`sort()` 等操作。 |
| 第三方库基础 | 数学、随机数、正则、绘图、表格、数组、地图、符号计算 | `math`、`random`、`re`、`matplotlib`、`openpyxl`、`numpy`、`folium`、`sympy` | 重点掌握“导入方式 + 常用函数 + 返回值类型”。 |

## 二、按数据类型和对象归并的函数表

| 数据类型/对象 | 函数或方法 | 代码中作用 | 典型写法 | 复习提醒 |
|---|---|---|---|---|
| 通用对象 | `print()` | 输出结果 | `print(a, b)` | 多个参数默认用空格分隔；`end` 可改变结尾。 |
| 通用对象 | `input()` | 获取键盘输入 | `s = input()` | 返回值一定是字符串。 |
| 通用对象 | `type()` | 查看对象类型 | `type(fig0)` | 调试和理解库对象时常用。 |
| 通用对象 | `id()` | 查看对象身份标识 | `id(a) == id(b)` | 可配合 `is` 理解可变/不可变对象。 |
| 通用对象 | `bool()` | 转布尔值 | `bool(love)` | 空序列、0、`None` 通常为 `False`。 |
| 数值 | `int()` | 转整数 | `int(input())` | 字符串必须是合法整数。 |
| 数值 | `float()` | 转浮点数 | `float(input())` | 适合小数计算。 |
| 数值 | `abs()` | 绝对值 | `abs(turtle.pos())` | 数值、部分对象可用。 |
| 数值 | `round()` | 四舍五入 | 本批代码主要用格式化控制小数 | 考试中也常见，但当前代码更多使用 `:.2f`。 |
| 数值序列 | `sum()` | 求和 | `sum(v)`、`sum(item["x"] for item in data)` | 注意不要把变量命名为 `sum`，会覆盖内置函数。 |
| 数值序列 | `max()` | 最大值 | `max(v)`、`max(lines, key=len)` | 可配合 `key` 指定比较规则。 |
| 数值序列 | `min()` | 最小值 | `min(x, y)`、`min(v)` | 可处理多个参数或一个可迭代对象。 |
| 数值序列 | `range()` | 生成整数序列 | `range(1, n+1)` | 常用于 `for` 循环。 |
| 字符 | `ord()` | 字符转 Unicode 编码 | `ord("A")` | 可用于字母序号、排序键。 |
| 字符 | `chr()` | 编码转字符 | `chr(ord("a") + x)` | 与 `ord()` 互逆。 |
| 字符串 | `.lower()` | 转小写 | `s.lower()` | 常用于忽略大小写统计单词。 |
| 字符串 | `.split()` | 按空白或指定分隔符拆分 | `input().split()`、`s.split("//")` | 返回列表；默认按任意空白拆分。 |
| 字符串 | `.strip()` | 去除首尾空白 | `input().strip()` | 只去首尾，不去中间。 |
| 字符串 | `.rstrip()` | 去除右侧空白或换行 | `line.rstrip()` | 处理文件行时常用。 |
| 字符串 | `.ljust()` | 左对齐并填充到指定宽度 | `line.rstrip().ljust(maxLength)` | 用于格式化文本列。 |
| 字符串 | `.join()` | 连接字符串序列 | `"".join(list)`、`" ".join(j)` | 分隔符写在前面；序列元素必须是字符串。 |
| 字符串 | `.format()` | 格式化字符串 | `"{} {:.2f}".format(name, avg)` | 与 f-string 功能类似。 |
| 字符串/序列 | `len()` | 求长度 | `len(s)`、`len(listA)` | 字符串长度、列表元素个数、字典键个数都可用。 |
| 字符串/列表/元组 | 索引 | 取单个元素 | `s[-1]`、`a[4][0][1]` | 负索引从右往左。 |
| 字符串/列表/元组 | 切片 | 取子序列或复制 | `v[::-1]`、`lst[:middle]`、`coins[:]` | 切片不会包含结束下标。 |
| 列表 | `list()` | 转列表 | `list(range(4))` | 可把可迭代对象转成列表。 |
| 列表 | `.append()` | 末尾追加元素 | `moneyHolds.append(moneyHold)` | 原地修改，无返回新列表。 |
| 列表 | `.insert()` | 指定位置插入元素 | `a.insert(2, "female")` | 原位置及其后元素右移。 |
| 列表 | `.remove()` | 删除第一个匹配元素 | `v.remove(x)` | 元素不存在会报错。 |
| 列表 | `.clear()` | 清空列表 | `a.clear()` | 原列表变为空列表。 |
| 列表 | `.count()` | 统计元素出现次数 | `v.count(x)` | 按值比较。 |
| 列表 | `.copy()` | 浅拷贝 | `stuA = students.copy()` | 与 `a[:]` 类似；嵌套对象仍共享内部引用。 |
| 列表 | `.sort()` | 原地排序 | `fruits.sort(reverse=True)` | 修改原列表，返回 `None`。 |
| 列表/可迭代对象 | `sorted()` | 返回排序后的新列表 | `sorted(students, key=myKey)` | 不改变原对象。 |
| 列表/可迭代对象 | `enumerate()` | 同时获得下标和值 | `for idx, row in enumerate(rows):` | 默认从 0 开始，可指定 `start`。 |
| 字典 | `.get()` | 安全取值，可设默认值 | `count.get(i, 0)` | 键不存在时返回默认值，不报错。 |
| 字典 | `.keys()` | 获取所有键 | `count.keys()` | 常用于遍历或排序键。 |
| 字典 | `.values()` | 获取所有值 | `course.values()` | 可用于求和、遍历。 |
| 字典 | `.items()` | 获取键值对 | `for k, v in course.items():` | 遍历字典最常用。 |
| 字典 | `.update()` | 合并或更新字典 | `GDP.update(GDP2)` | 相同键会被新值覆盖。 |
| 字典 | `.copy()` | 浅拷贝字典 | `GDP1 = GDP.copy()` | 新字典对象，内部嵌套对象仍可能共享。 |
| 字典 | `.clear()` | 清空字典 | `GDP.clear()` | 原字典被清空。 |
| 文件对象 | `open()` | 打开文件 | `open(path, "r", encoding="utf-8")` | 模式：`r` 读，`w` 写，`rb/wb` 二进制。 |
| 文件对象 | `.readlines()` | 读取所有行 | `lines = f.readlines()` | 返回字符串列表，通常每行带换行符。 |
| 文件对象 | `.writelines()` | 写入多行 | `f.writelines(newLines)` | 不会自动加换行，需要自己准备。 |
| JSON | `json.dump()` | 写 JSON 文件 | `json.dump(data, f, ensure_ascii=False, indent=4)` | `ensure_ascii=False` 可保留中文。 |
| JSON | `json.load()` | 读 JSON 文件 | `data = json.load(f)` | 读回字典、列表等 Python 对象。 |
| pickle | `pickle.dump()` | 序列化写入二进制文件 | `pickle.dump((years, incomes), f)` | 文件要用 `wb`。 |
| pickle | `pickle.load()` | 反序列化读取 | `years2, incomes2 = pickle.load(f)` | 文件要用 `rb`。 |
| 正则 | `re.findall()` | 查找所有匹配 | `re.findall(r"[a-z]+", s)` | 返回匹配结果列表。 |
| 随机数 | `random.random()` | 生成 `[0,1)` 浮点随机数 | `random.random() > 0.5` | 可用于概率模拟。 |
| 随机数 | `random.randint()` | 生成闭区间随机整数 | `random.randint(1, 1000)` | 左右端点都可能取到。 |
| 随机数 | `random.seed()` | 设置随机种子 | `random.seed(0)` | 让随机结果可复现。 |
| math 模块 | `math.pi` | 圆周率常量 | `math.pi * r * r` | 常用于圆面积、周长。 |
| math 模块 | `math.sqrt()` | 平方根 | `math.sqrt(x*x + y*y)` | 等价于 `x ** 0.5`。 |
| math 模块 | `math.pow()` | 幂运算 | `math.pow(c, 1.0/3.0)` | Python 中也可用 `**`。 |
| math 模块 | `ceil()` | 向上取整 | `ceil(iLength/3)` | 来自 `from math import ceil`。 |
| turtle | `color()`、`begin_fill()`、`forward()`、`left()`、`pos()`、`end_fill()`、`done()` | 绘图控制 | `turtle.forward(250)` | 了解顺序执行和循环绘图即可。 |
| NumPy | `np.linspace()` | 生成等差数组 | `np.linspace(-5, 5, 200)` | 常用于绘图横坐标。 |
| NumPy | `numpy.zeros()` | 创建全零数组 | `numpy.zeros((n, m), dtype=int)` | 可创建二维访问标记数组。 |
| Matplotlib | `plt.figure()`、`subplot()`、`plot()`、`scatter()`、`title()`、`show()` | 绘图 | `plt.plot(x, y)`、`plt.show()` | 重点理解“准备数据 -> 绘图 -> 显示”。 |
| openpyxl | `load_workbook()`、`.worksheets`、`.save()` | 读写 Excel | `workBook = load_workbook(...)` | 单元格通过 `row[i].value` 读写。 |
| pandas | `pd.read_csv()` | 读取 CSV | `pd.read_csv("file.csv")` | 返回 DataFrame。 |
| pandas/NumPy | `.values.tolist()` | 表格列转普通列表 | `cdata[["Y", "X"]].values.tolist()` | 常用于把数据交给其他库。 |
| folium | `folium.Map()`、`HeatMap()`、`.add_to()`、`.save()` | 生成地图热力图 | `HeatMap(data).add_to(map)` | 输出 HTML 文件。 |
| sympy | `Symbol()`、`exp()`、`integrate()`、`oo` | 符号计算与积分 | `sympy.integrate(g, (x, -sympy.oo, 0))` | 区分符号计算和普通数值计算。 |
| os | `os.path.getsize()` | 获取文件大小 | `os.path.getsize(path)` | 返回字节数。 |
| os | `os.system()` | 执行系统命令 | `os.system("explorer file.html")` | 与操作系统相关，考试一般只需识别。 |

## 三、常见考试题型对应复习提示

| 题型 | 本目录对应知识 | 解题抓手 |
|---|---|---|
| 基础计算题 | 圆面积、路程时间、GPA、排队问题、存取款模拟 | 先明确输入类型，再列公式，最后控制输出格式。 |
| 分支判断题 | 闰年、限速罚款、象限判断、单复数输出 | 条件从特殊到一般排列；注意边界值。 |
| 循环题 | π 近似、猜数字、最大公约数、百钱买百鸡、素数筛 | 明确循环变量、循环条件、更新语句和退出条件。 |
| 列表处理题 | 去重、排序、切片、扑克牌生成、二维列表 | 熟练使用索引、切片、`append()`、`sort()`、列表推导式。 |
| 字典统计题 | GDP 字典、词频统计、摩尔斯编码 | 字典键值访问是核心；统计题优先想到 `dict.get(key, 0) + 1`。 |
| 函数题 | 默认参数、可变参数、关键字参数、函数作参数 | 写清参数、返回值；不要把输出和返回值混淆。 |
| 递归题 | 组合数、数字拆分、归并排序、找假币、DFS | 必须先写基例；每次递归都要让问题规模变小。 |
| 面向对象题 | 宠物继承、三维向量、矩形和点、骰子、力的比较 | 会写 `class`、`__init__`、`self`、继承、魔术方法。 |
| 文件题 | 文本加行号、JSON、pickle、Excel、身份证校验输出 | 使用 `with open(...) as f`；注意读写模式和编码。 |
| 第三方库题 | turtle、matplotlib、numpy、sympy、folium、openpyxl | 记住导入方式和常见调用链，理解数据从哪里来、输出到哪里去。 |

## 四、易错点速记

1. `input()` 永远返回字符串，数值计算前必须转换。
2. `range(a, b)` 不包含 `b`，倒序时步长必须为负数。
3. `list.sort()` 修改原列表，`sorted()` 返回新列表。
4. `a = b` 是引用同一个对象；`a[:]`、`a.copy()` 是浅拷贝。
5. 列表可变，元组和字符串不可变。
6. `is` 判断是否同一个对象，`==` 判断值是否相等。
7. 字典访问不存在的键会报错，统计时优先用 `.get()`。
8. 函数中修改全局变量需要 `global`，但考试中更推荐通过返回值传递结果。
9. 递归一定要有基例，否则会无限递归。
10. 不要把变量命名为 `sum`、`max`、`list` 等内置函数名，否则后面可能无法再正常调用内置函数。
11. 文件写入模式 `w` 会覆盖原文件；二进制文件要用 `rb`、`wb`。
12. f-string 中保留两位小数写作 `f"{x:.2f}"`。

## 五、建议考前复习顺序

1. 先复习输入输出、类型转换、表达式、格式化输出。
2. 再复习 `if`、`for`、`while`、`break`、`continue`。
3. 集中复习列表、字符串、字典三类核心数据结构。
4. 用 3 到 5 道题练函数：默认参数、`*args`、`**kwargs`、返回值。
5. 最后复习递归、文件操作、类和对象，这些通常是综合题或提高题。

