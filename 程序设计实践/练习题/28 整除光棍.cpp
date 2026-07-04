#include<bits/stdc++.h>
#define int long long
using namespace std;
int x;
bool flag;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>x;
    int t=0,cnt=0;
    for(int i=1;i;i++){
        t*=10;
        t++;
        if(t>=x) flag=1;
        if(flag){
            cout<<t/x;
            t%=x;
        }
        if(t==0){
            cnt=i;
            break;
        }
    }
    cout<<" "<<cnt;
    return 0;
}