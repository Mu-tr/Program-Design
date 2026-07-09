#include<bits/stdc++.h>
#define int long long
using namespace std;
int m,n,dx[4]={0,1,0,-1},dy[4]{1,0,-1,0},t1,t2,t3,t4,v[105][105];
bool flag;
char a[105][105];
void dfs(int x,int y){
    if(x<=0||x>m||y<=0||y>n||a[x][y]=='W'||v[x][y]) return;
    v[x][y]=1;
    if(x==t3&&y==t4){
        flag=1;
        v[x][y]=2;
        return;
    }
    for(int i=0;i<4;i++){
        dfs(x+dx[i],y+dy[i]);
        if(flag){
            v[x][y]=2;
            return;
        }
    }
}
signed main(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    cin>>t1>>t2>>t3>>t4;
    t1++;t2++;t3++;t4++;
    dfs(t1,t2);
    if(flag){
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(j>1) cout<<" ";
                if(a[i][j]=='W') cout<<'W';
                else{
                    if(v[i][j]==0) cout<<".";
                    else if(v[i][j]==1) cout<<"o";
                    else cout<<"*";
                }
            }
            cout<<"\n";
        }
    }
    else cout<<"None";
    return 0;
}