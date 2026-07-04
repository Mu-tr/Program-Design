#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,S,t;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>T>>S>>t;
    if(S){
        if(T>35&&t>=33) cout<<"Bu Tie\n"<<T;
        else cout<<"Bu Re\n"<<t;
    }
    else{
        if(t<33||T<=35) cout<<"Shu Shi\n"<<t;
        else cout<<"Shi Nei\n"<<T;
    }
    return 0;
}