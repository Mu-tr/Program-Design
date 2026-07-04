#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,cnt;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    while(cin>>n){
        cnt++;
        if(n==250){
            cout<<cnt;
            break;
        }
    }
    return 0;
}