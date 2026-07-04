cnt,ans,mn=0,0,-1
while True:
    cnt+=1
    s=input()
    if(s=="."):
        break
    if(s.find("chi1 huo3 guo1")!=-1):
        if mn==-1:
            mn=cnt
        ans+=1
print(cnt-1)
if mn==-1:
    print("-_-#")
else:
    print(mn,ans)