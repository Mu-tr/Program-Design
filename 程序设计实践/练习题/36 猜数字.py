n=int(input())
class ok:
    def __init__(self,x,y):
        self.name=x
        self.id=y
a=[]
sum=0
for i in range(n):
    x,y=input().split()
    sum+=int(y)
    a.append(ok(x,int(y)))
sum/=(n*2.0)
b=int(sum)
mx=1e9
ans=""
for i in a:
    j=abs(i.id-sum)
    if j<mx:
        mx=j
        ans=i.name
print(f"{b} {ans}")        