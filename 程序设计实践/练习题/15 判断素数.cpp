#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a;
bool check(int x){
    if(x<=1) return 0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(check(a)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}