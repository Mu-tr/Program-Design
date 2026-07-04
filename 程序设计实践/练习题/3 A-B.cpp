#include<bits/stdc++.h>
#define int long long
using namespace std;
string a,b;
int v[1005];
signed main(){
    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<(int)b.size();i++) v[b[i]]=1;
    for(int i=0;i<(int)a.size();i++) if(!v[a[i]]) cout<<a[i];
    return 0;
}