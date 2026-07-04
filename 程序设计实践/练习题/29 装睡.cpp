#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,t1,t2;
string s;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s>>t1>>t2;
        bool v=1;
        if(t1<15||t1>20) v=0;
        if(t2<50||t2>70) v=0;
        if(!v) cout<<s<<"\n";
    }
    return 0;
}