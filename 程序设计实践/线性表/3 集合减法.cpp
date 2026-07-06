#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[30005],b[30005];
bool v[30005];
vector<int> e;
signed main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i],v[b[i]]=1;
    for(int i=1;i<=n;i++) if(!v[a[i]]) e.push_back(a[i]);
    sort(e.begin(),e.end());
    if(e.empty()) cout<<(int)e.size()<<"\n";
    else{
        for(int i=0;i<(int)e.size();i++){
            cout<<e[i]<<" ";
        }
    }
    return 0;
}