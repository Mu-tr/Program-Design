#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[105],f[105];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int ans=0;
    for(int i=1;i<=n;i++){
        f[i]=1;
        for(int j=1;j<i;j++) if(a[j]<a[i]) f[i]=max(f[i],f[j]+1);
        ans=max(ans,f[i]);
    }
    cout<<ans;
    return 0;
}