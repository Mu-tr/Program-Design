a=[7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2]
ans=['1','0','X','9','8','7','6','5','4','3','2']
ANS=[]
def check(s):
    global a,ans,ANS
    sum=0
    flag=False
    c=len(s)
    for i,j in enumerate(s):
        if i<=16:
            if '0'<=j<='9':
                sum+=(a[i]*int(j))
            else:
                flag=True
                break
    sum%=11
    if flag or len(s)!=18 or ans[sum]!=s[-1]:
        ANS.append(s+"\n")

ANS.append("姓名 学号\n")
with open("实验19/ids.txt","r") as file:
    lines=file.readlines()
    for i in lines:
        check(i.strip())
with open("实验19/error.txt","w",encoding="utf-8") as file:
    file.writelines(ANS)