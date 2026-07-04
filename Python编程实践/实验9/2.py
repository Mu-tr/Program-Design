x = eval(input("请输入整数x:"))
y = eval(input("请输入整数y:"))
d = min(x,y)
while not (x % d == 0 and y%d==0):
    d -= 1

print("GCD(x,y) =",d)