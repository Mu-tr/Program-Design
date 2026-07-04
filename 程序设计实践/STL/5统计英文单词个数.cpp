#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,n;
string s;
map<string,int> mp;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>T;
    while(T--){
        mp.clear();
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>s;
            mp[s]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            cout<<(i->first)<<" "<<(i->second)<<"\n";
        }
    }
    return 0;
}