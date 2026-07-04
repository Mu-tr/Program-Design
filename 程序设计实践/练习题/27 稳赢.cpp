#include<bits/stdc++.h>
#define int long long
using namespace std;
int k;
string s;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>k;
    for(int i=1;i;i++){
        cin>>s;
        if(s=="End") break;
        if(i%(k+1)==0) cout<<s<<"\n";
        else{
            if(s=="ChuiZi") cout<<"Bu\n";
            else if(s=="Bu") cout<<"JianDao\n";
            else cout<<"ChuiZi\n";
        }
    }
    return 0;
}