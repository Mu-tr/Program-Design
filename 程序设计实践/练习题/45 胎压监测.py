*a,t1,t2=map(int,input().split())
cnt,ans,id=0,0,0
for i in a:
    id+=1
    if(i<t1 or max(a)-i>t2):
        cnt+=1
        ans=id
if cnt==0:
    print("Normal")
elif cnt==1:
    print(f"Warning: please check #{ans}!")
else:
    print("Warning: please check all the tires!")