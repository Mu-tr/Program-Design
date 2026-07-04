#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
string a[105];
bool cmp(string x,string y){
    return x+y>y+x;
}
signed main(){
    while(cin>>n){
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+1+n,cmp);
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<"\n";
    }
    return 0;
}