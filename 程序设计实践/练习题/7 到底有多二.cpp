#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>s;
    int d1=0,d2=0;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]>='0'&&s[i]<='9') d1++;
        if(s[i]=='2') d2++;
    }
    double d=(double)d2/(double)d1;
    if(s[0]=='-') d*=1.5;
    if(((s[(int)s.size()-1]-'0')%2)==0) d*=2.0;
    d*=100.0;
    cout<<fixed<<setprecision(2)<<d<<"%";
    return 0;
}