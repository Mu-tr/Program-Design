#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
char a[4]={'G','P','L','T'};
int sum[4];
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]=='g'||s[i]=='G') sum[0]++;
        if(s[i]=='p'||s[i]=='P') sum[1]++;
        if(s[i]=='l'||s[i]=='L') sum[2]++;
        if(s[i]=='t'||s[i]=='T') sum[3]++;
    }
    int t=0;
    for(int i=1;i<=40000;i++){
        if(sum[t]){
            sum[t]--;
            cout<<a[t];
        }
        t++;t%=4;
    }
    return 0;
}