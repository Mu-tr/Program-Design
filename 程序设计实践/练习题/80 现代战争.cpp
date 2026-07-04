#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k,a[1005][1005],t1,t2,t3;
bool v1[1005],v2[1005];
struct ok{
    int x,y,z;
    bool operator < (const ok &A) const{
        return z>A.z;
    }
};
vector<ok> e;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            e.push_back((ok){i,j,a[i][j]});
        }
    }
    sort(e.begin(),e.end());
    int tot=0;
    for(int i=0;i<(int)e.size();i++){
        ok t=e[i];
        if(v1[t.x]||v2[t.y]) continue;
        v1[t.x]=1;v2[t.y]=1;
        tot++;
        if(tot==k) break; 
    }
    for(int i=1;i<=n;i++){
        if(v1[i]) continue;
        bool flag=0;
        for(int j=1;j<=m;j++){
            if(v2[j]) continue;
            if(flag) cout<<" ";
            flag=1;
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
}