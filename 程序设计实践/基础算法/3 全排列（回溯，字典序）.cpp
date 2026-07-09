#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[15];
signed main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i]=i;
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    while(next_permutation(a+1,a+1+n)){
        for(int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}