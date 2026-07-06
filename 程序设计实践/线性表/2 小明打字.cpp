#include<bits/stdc++.h>
#define int long long
using namespace std;
string s,ans;
int t=0;
bool flag=0;
signed main(){
    getline(cin,s);
    for(int i=0;i<(int)s.size();i++){
        if(s[i]=='[') t=0;
        else if(s[i]==']') t=ans.size();
        else if(s[i]=='{') t--,t=max(t,(int)0);
        else if(s[i]=='}') t++,t=min(t,(int)ans.size());
        else if(s[i]=='-') flag^=1;
        else if(s[i]=='=') ans.erase(--t,1);
        else{
            if(!flag) ans.insert(t++,1,s[i]);
            else ans[t++]=s[i];
        }
    }
    cout<<ans;
	return 0;
}
