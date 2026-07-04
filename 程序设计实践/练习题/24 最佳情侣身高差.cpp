#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
double t2;
char t1;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t1>>t2;
        double d=t2;
        if(t1=='M') d/=1.09;
        else d*=1.09;
        cout<<fixed<<setprecision(2)<<d<<"\n";
    }
    return 0;
}