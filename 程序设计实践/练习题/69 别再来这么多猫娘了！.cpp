#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,tot;
char ch;
string s,a[105],ans;
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    a[0]="<censored>";
    cin>>k;
    ch=getchar();
    getline(cin,s);
    for(int j=1;j<=n;j++){
        ans.clear();
        int sz=a[j].size();
        for(int i=0;i<(int)s.size();i++){
            // cout<<j<<" "<<i<<" "<<s.size()<<"\n";
            bool flag=1;
            if((i+(int)a[0].size()-1)<(int)s.size()){
                for(int g=0;g<(int)a[0].size();g++){
                    if(s[i+g]!=a[0][g]){
                        flag=0;
                        break;
                    }
                }
            }
            else flag=0;
            if(flag){
                ans+="<censored>";
                i+=(a[0].size()-1);
            }
            else{
                bool f=1;
                if((i+sz-1)<(int)s.size()){
                    for(int g=0;g<sz;g++){
                        if(s[i+g]!=a[j][g]){
                            f=0;
                            break;
                        }
                    }
                }
                else f=0;
                if(f){
                    ans+="<censored>";tot++;
                    i+=(a[j].size()-1);
                }
                else ans+=s[i];
            }
        }
        s=ans;
    }
    if(tot>=k){
        cout<<tot<<"\n";
        cout<<"He Xie Ni Quan Jia!";
    }
    else cout<<ans;
    return 0;
}