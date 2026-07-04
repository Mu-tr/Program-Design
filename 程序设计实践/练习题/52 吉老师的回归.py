n,m=map(int,input().split())
cnt=0
for i in range(n):
    s=input()
    if s.find("qiandao")==-1 and s.find("easy")==-1:
        cnt+=1
        if cnt>m:
            print(s)
            break
if cnt<=m:
    print("Wo AK le")