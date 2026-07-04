#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,K;
string a;
map<string,int> mp,v;
vector<string> ans;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>K;
        for(int j=1;j<=K;j++){
            cin>>a;
            if(K>1) mp[a]=1;
        }
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>a;
        if(!mp[a]){
            if(!v[a]){
                v[a]=1;
                ans.push_back(a);
            }
        }
    }
    if(ans.empty()) cout<<"No one is handsome";
    else{
        for(int i=0;i<(int)ans.size();i++){
            if(i) cout<<" ";
            cout<<ans[i];
        }
    }
    return 0;
}