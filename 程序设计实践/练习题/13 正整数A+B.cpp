#include<bits/stdc++.h>
#define int long long
using namespace std;
string s,a,b;
bool check(string x){
    if(x.empty()) return 0;
    if(x[0]=='0') return 0;
    for(int i=0;i<x.size();i++) if(x[i]<'0'||x[i]>'9') return 0;
    return 1;
}
int js(string x){
    int d=0;
    for(int i=0;i<x.size();i++){
        d*=10;
        d+=(x[i]-'0');
    }
    return d;
}
signed main(){
    getline(cin,s);
    int t;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]==' '){
            t=i;
            break;
        }
    }
    a=s.substr(0,t);
    b=s.substr(t+1,s.size());
    bool f=0;
    if(!check(a)||stoi(a)<1||stoi(a)>1000||(int)a.size()>4) f=1,a="?";
    if(!check(b)||stoi(b)<1||stoi(b)>1000||(int)b.size()>4) f=1,b="?";
    if(!f) cout<<a<<" + "<<b<<" = "<<js(a)+js(b);
    else cout<<a<<" + "<<b<<" = ?";
    return 0;
}