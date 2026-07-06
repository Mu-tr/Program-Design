#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,y,a[100005];
vector<int> e;
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>x>>y;
    for(int i=1;i<=n;i++){
        if(a[i]<x||a[i]>y) e.push_back(a[i]);
    }
    for(int i=0;i<(int)e.size();i++){
        if(i) cout<<" ";
        cout<<e[i];
    }
    return 0;
}