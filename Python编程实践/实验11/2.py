import re
n=int(input())
count={}
for j in range(n):
    s=input().lower()
    a=re.findall(r'[a-z]+',s)
    for i in a:
        count[i] = count.get(i, 0) + 1
for key in sorted(count.keys()):
    print(f"{key} {count[key]}")