#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a,t1,t2;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a&1) t1++;
        else t2++;
    }
    cout<<t1<<" "<<t2;
    return 0;
}