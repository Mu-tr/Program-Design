a=[]
t1,t2,n=map(int,input().split())
a.append(t1)
a.append(t2)
t=0
while len(a)<n:
    d=a[t]*a[t+1]
    t+=1
    for i in str(d):
        a.append(int(i))
for i in range(n):
    if i==n-1:
        print(a[i],end='')
    else:
        print(a[i],end=' ')
