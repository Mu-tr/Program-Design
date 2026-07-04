#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int a[105],mx,mn=1e18;
bool v[105];
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    v[1]=v[0]=1;
    for(int i=2;i<=100;i++){
        if(!v[i]){
            for(int j=i+i;j<=100;j+=i) v[j]=1;
        }
    }
    cin>>s;
    for(int i=0;i<(int)s.size();i++) a[s[i]-'a']++;
    for(int i=0;i<26;i++){
        if(a[i]==0) continue;
        mx=max(mx,a[i]),mn=min(mn,a[i]);
    }
    if(!v[mx-mn]) cout<<"Lucky Word\n";
    else cout<<"No Answer\n";
    if(!v[mx-mn]) cout<<mx-mn<<"\n";
    else cout<<"0";
    return 0;
}