#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,mx,mx2;
map<int,int> mp;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    while(cin>>n){
        mp[n]++;
        if(mp[n]>mx) mx=mp[n],mx2=n;
        else if(mp[n]==mx){
            if(n<mx2) mx2=n;
        }
    }
    cout<<mx2;
    return 0;
}