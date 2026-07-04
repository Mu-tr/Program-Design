#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,r,a[2005];
signed main(){
    cin>>n>>r;
    for(int i=1;i<=n;i++) cin>>a[i];
    int d1=r+1,d2=n-r;
    if(d1<=d2) sort(a+d1,a+1+d2);
    for(int i=1;i<=n;i++){
        cout<<a[i];
        if(i<n) cout<<" ";
    }
    return 0;
}