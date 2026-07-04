def js():
    global cnt,ans
    if cnt>9:
        ans+="27"
    elif cnt>3:
        ans+='9'
    else:
        for j in range(cnt):
            ans+='6'

s=input()
ans=""
cnt=0
for i in s:
    if i!='6':
        js()
        cnt=0
        ans+=i
    else:
        cnt+=1
js()
print(ans)