#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b;
signed main(){
    cin>>a>>b;
    if(b==0) cout<<a<<"/"<<b<<"=Error";
    else{
        double w=(double)a/(double)b;
        if(b>0) cout<<a<<"/"<<b<<"="<<fixed<<setprecision(2)<<w;
        else cout<<a<<"/"<<"("<<b<<")="<<fixed<<setprecision(2)<<w;
    }
    return 0;
}