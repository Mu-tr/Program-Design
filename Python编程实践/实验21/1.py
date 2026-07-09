import numpy

def dfs(x,y):
    global cnt,vis,s
    if x<0 or y<0 or x>=n or y>=m or s[x][y]=='0' or vis[x][y]==cnt:
        return
    vis[x][y]=cnt
    dfs(x-1,y)
    dfs(x+1,y)
    dfs(x,y-1)
    dfs(x,y+1)

s=[]
n,m=map(int,input().split())
for i in range(n):
    a=input()
    s.append(a)
vis=numpy.zeros((n,m),dtype=int)
cnt=0
for i in range(n):
    for j in range(m):
        if vis[i][j]==0 and s[i][j]=='1':
            cnt+=1
            dfs(i,j)
print(cnt)