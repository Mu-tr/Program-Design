#include<bits/stdc++.h>
#define int long long
using namespace std;
int cnt;
string a[100005];
signed main(){
    while(1){
        cin>>a[++cnt];
        if(a[cnt]==".") break;
    }
    cnt--;
    if(cnt>=14) cout<<a[2]<<" and "<<a[14]<<" are inviting you to dinner...";
    else if(cnt>=2) cout<<a[2]<<" is the only one for you...";
    else cout<<"Momo... No one is for you ...";
    return 0;
}