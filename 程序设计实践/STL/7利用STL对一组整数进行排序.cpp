#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
vector<int> e;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    while(1){
        cin>>s;
        if(s.size()==1){
            if(s[0]<'0'||s[0]>'9') break;
        }
        bool f=0;
        if(s[0]=='-') f=1;
        int d=0;
        for(int i=0;i<(int)s.size();i++){
            d*=10;
            if(s[i]>='0'&&s[i]<='9') d+=(s[i]-'0');
        }
        if(f) d=-d;
        e.push_back(d);
    }
    sort(e.begin(),e.end());
    for(int i=0;i<(int)e.size();i++){
        cout<<" ";
        cout<<e[i];
    }
    return 0;
}