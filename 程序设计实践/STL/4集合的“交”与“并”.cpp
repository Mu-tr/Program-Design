#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],b[200005];
map<int,int> mp;
vector<int> e1,e2;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
        mp[b[i]]++;
    }
    for(auto i=mp.begin();i!=mp.end();i++){
        e1.push_back(i->first);
        if((i->second)==2) e2.push_back(i->first);
    }
    cout<<e2.size();
    for(int i=0;i<(int)e2.size();i++) cout<<" "<<e2[i];
    cout<<"\n";
    cout<<e1.size();
    for(int i=0;i<(int)e1.size();i++) cout<<" "<<e1[i];
    cout<<"\n";
    return 0;
}