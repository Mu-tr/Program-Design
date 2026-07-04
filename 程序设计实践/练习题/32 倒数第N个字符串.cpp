#include<bits/stdc++.h>
#define int long long
using namespace std;
int L,N;
string s;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>L>>N;
    int d=pow(26,L)-N,t=1;
    for(int i=1;i<=L;i++,t*=26){
        int w=d%(t*26);
        w/=t;
        s+=('a'+w);
    }
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}