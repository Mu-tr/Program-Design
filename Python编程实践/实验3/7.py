import math
a=float(input())
b=float(input())
c=math.pi*a*a*a+math.pi*b*b*b
c/=6.0
d=math.pow(c,1.0/3.0)
print(f"正方体边长为:{d:.2f}.")