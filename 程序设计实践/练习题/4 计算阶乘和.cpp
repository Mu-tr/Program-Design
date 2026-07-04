#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,s[15],sum;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
    s[0]=1;
    for(int i=1;i<=n;i++){
        s[i]=s[i-1]*i;
        sum+=s[i];
    }
    cout<<sum;
    return 0;
}