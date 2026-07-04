n=int(input())
a=input().split()
mn,mx=1e9,0
mp={}
for i in a:
    mn=min(mn,int(i))
    mx=max(mx,int(i))
    if mp.get(int(i),0)==0:
        mp[int(i)]=1
    else:
        mp[int(i)]+=1
print(f"{mn} {mp[mn]}")
print(f"{mx} {mp[mx]}")