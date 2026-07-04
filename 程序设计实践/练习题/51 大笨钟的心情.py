a=input().split()
while True:
    n=int(input())
    if 0<=n<=23:
        if int(a[n])>50:
            print(f"{int(a[n])} Yes")
        else:
            print(f"{int(a[n])} No")
    else:
        break