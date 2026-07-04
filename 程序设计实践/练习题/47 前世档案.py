n,m=map(int,input().split())
for i in range(m):
    s=input()
    sum=1
    t=2**len(s)
    for j in s:
        t/=2
        if j=='n':
            sum+=t
    print(int(sum))