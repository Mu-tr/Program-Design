#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
bool v[105];
struct ok{
    string s;
    int id;
}a[105];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].id>>a[i].s;
    }
    for(int i=1;i<=n;i++){
        if(!v[i]){
            for(int j=n;j>=1;j--){
                if(a[i].id==a[j].id) continue;
                if(!v[j]){
                    v[i]=v[j]=1;
                    if(i<j) cout<<a[i].s<<" "<<a[j].s<<"\n";
                    else cout<<a[j].s<<" "<<a[i].s<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}