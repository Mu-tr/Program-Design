#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
vector<int> e,E;
void dfs(int k,string s){
    if(k==(n+1)){
        e.clear();E.clear();
        int t=0;
        for(int i=0;i<(int)s.size();i++){
            if(s[i]>='0'&&s[i]<='9'){
                t*=10;
                t+=(s[i]-'0');
            }
            else if(s[i]!=' '){
                e.push_back(t);
                t=0;
                if(s[i]=='+') E.push_back(0);
                else E.push_back(1);
            }
        }
        e.push_back(t);
        int sum=e[0];
        for(int i=0;i<(int)E.size();i++){
            if(E[i]==0) sum+=e[i+1];
            else sum-=e[i+1];
        }
        if(sum==0) cout<<s<<"\n";
        return;
    }
    dfs(k+1,s+" "+(char)('0'+k));
    dfs(k+1,s+"+"+(char)('0'+k));
    dfs(k+1,s+"-"+(char)('0'+k));
}
signed main(){
    cin>>n;
    dfs(2,"1");
    return 0;
}