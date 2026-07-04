#include<bits/stdc++.h>
#define int long long
using namespace std;
int t1,t2,a,b,c;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>t1>>t2;
    cin>>a>>b>>c;
    int cnt=0;
    if(t1>t2){
        if(!a) cnt++;
        if(!b) cnt++;
        if(!c) cnt++;
        if(cnt) cout<<"The winner is a: "<<t1<<" + "<<cnt;
        else cout<<"The winner is b: "<<t2<<" + 3";
    }
    else{
        if(a) cnt++;
        if(b) cnt++;
        if(c) cnt++;
        if(cnt) cout<<"The winner is b: "<<t2<<" + "<<cnt;
        else cout<<"The winner is a: "<<t1<<" + 3";
    }
    return 0;
}