#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
stack<char> q;
signed main(){
    cin>>s;
    for(int i=0;i<(int)s.size();i++) q.push(s[i]);
    bool flag=1;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]==q.top()) q.pop();
        else{
            flag=0;
            break;
        }
    }
    if(flag) cout<<"yes";
    else cout<<"no";
    return 0;
}