#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=1e9;
int T,a[5],b[5];
bool flag;
void dfs2(int k,vector<int> &e){
    if(k==4){
        if(e[0]==24) flag=1;
        return;
    }
    for(int i=0;i<(int)e.size();i++){
        for(int j=0;j<(int)e.size();j++){
            if(i==j) continue;
            int d;
            if(b[k]==0) d=e[i]+e[j];
            else if(b[k]==1) d=e[i]-e[j];
            else if(b[k]==2) d=e[i]*e[j];
            else{
                if(e[j]==0||e[i]%e[j]) continue;
                d=e[i]/e[j];
            }
            vector<int> E;
            for(int g=0;g<(int)e.size();g++) if(g!=i&&g!=j) E.push_back(e[g]);
            E.push_back(d);
            dfs2(k+1,E);
        }
    }
}
void dfs(int k){
    if(k==4){
        vector<int> e;
        for(int i=1;i<=4;i++) e.push_back(a[i]);
        dfs2(1,e);
        return;
    }
    b[k]=0;
    dfs(k+1);
    b[k]=1;
    dfs(k+1);
    b[k]=2;
    dfs(k+1);
    b[k]=3;
    dfs(k+1);
}
signed main(){
    cin>>T;
    while(T--){
        cin>>a[1]>>a[2]>>a[3]>>a[4];
        flag=0;
        dfs(1);
        if(flag) cout<<"24\n";
        else cout<<"0\n";
    }
    return 0;
}