#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
char a;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n>>a;
    int d=(n+1)/2;
    for(int i=1;i<=d;i++){
        for(int j=1;j<=n;j++) cout<<a;
        cout<<"\n";
    }
    return 0;
}