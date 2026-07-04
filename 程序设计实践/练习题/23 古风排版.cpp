#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
string s,a[10005];
signed main(){
    cin>>n;
    cin.ignore();
    getline(cin,s);
    if(s.size()%n) for(int i=s.size()%n;i<n;i++) a[i]+=' ';
    for(int i=(int)s.size()-1;i>=0;i--) a[i%n]+=s[i];
    for(int i=0;i<n;i++) cout<<a[i]<<"\n";
    return 0;
}