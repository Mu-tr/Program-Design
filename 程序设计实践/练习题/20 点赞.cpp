#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,K,t1,mx,mx2;
map<int,int> mp;
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>K;
        for(int j=1;j<=K;j++){
            cin>>t1;
            mp[t1]++;
            if(mp[t1]>mx) mx=mp[t1],mx2=t1;
            else if(mp[t1]==mx) mx2=max(mx2,t1);
        }
    }
    cout<<mx2<<" "<<mx;
    return 0;
}