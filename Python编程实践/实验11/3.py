max=sum=0
s=""
for i in range(27):
    x,y=input().split()
    z=int(y)
    sum+=z
    if z>max:
        max=z
        s=x
print(f"大学数量最多的省份名:{s}")
print(f"这些列出的省份共有{sum}所大学")