vis=[True]*100005
vis[0]=vis[1]=False
for i in range(2,100001,1):
    if(vis[i]):
        for j in range(i+i,100001,i):
            vis[j]=False
n=int(input())
for i in range(2,n,1):
    if(not vis[i]):
        continue
    a=n-i
    v=True
    j=2
    while(j*j<=a):
        if(a%j==0):
            v=False
            break
        j+=1
    if(v):
        print(f"{n} = {i} + {a}")
        break