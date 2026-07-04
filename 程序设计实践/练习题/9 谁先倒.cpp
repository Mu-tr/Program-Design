#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,n,t1,t2,t3,t4;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>a>>b;
    cin>>n;
    int s1=0,s2=0;
    for(int i=1;i<=n;i++){
        cin>>t1>>t2>>t3>>t4;
        int d=t1+t3;
        if(d==t2&&d!=t4) s1++;
        if(d==t4&&d!=t2) s2++;
        if(a<s1){
            cout<<"A\n"<<s2;
            break;
        }
        if(b<s2){
            cout<<"B\n"<<s1;
            break;
        }
    }
    return 0;
}