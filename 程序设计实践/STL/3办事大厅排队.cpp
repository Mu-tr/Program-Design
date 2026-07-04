#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
string t1,t2;
queue<string> q;
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t1;
        if(t1=="in"){
            cin>>t2;
            q.push(t2);
        }
        if(t1=="out"&&(!q.empty())) q.pop();
        if(t1=="q"){
            if(q.empty()) cout<<"NULL\n";
            else cout<<q.front()<<"\n";
        }
    }
    return 0;
}