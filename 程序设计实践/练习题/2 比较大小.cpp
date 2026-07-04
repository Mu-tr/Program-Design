#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[5];
signed main(){
    for(int i=1;i<=3;i++) cin>>a[i];
    sort(a+1,a+4);
    cout<<a[1]<<"->"<<a[2]<<"->"<<a[3];
    return 0;
}