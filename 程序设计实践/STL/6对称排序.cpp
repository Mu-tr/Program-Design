#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
string s,a[100005];
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    for(int k=1;k;k++){
        cin>>n;
        if(n==0) break;
        cout<<"SET "<<k<<"\n";
        int d1=0,d2=n+1;
        for(int i=1;i<=n;i++){
            cin>>s;
            if(i&1) a[++d1]=s;
            else a[--d2]=s;
        }
        for(int i=1;i<=n;i++) cout<<a[i]<<"\n";
    }
    return 0;
}