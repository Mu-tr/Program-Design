#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
double h,w;
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>h>>w;w/=2.0;
        double d=(h-100.0)*0.9;
        // cout<<d<<" "<<w<<"\n";
        if(fabs(d-w)<(d*0.1)) cout<<"You are wan mei!\n";
        else if(w>d) cout<<"You are tai pang le!\n";
        else cout<<"You are tai shou le!\n";
    }
    return 0;
}