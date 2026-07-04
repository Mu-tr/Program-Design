#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[105],b[105];
int gcd(int x,int y){
    // cout<<x<<" "<<y<<endl;
    if(y==0) return x;
    return gcd(y,x%y);
}
int lcm(int x,int y){
    int d=gcd(x,y);
    return d*(x/d)*(y/d);
}
signed main(){
    cin>>n;
    int t=1;
    for(int i=1;i<=n;i++){
        scanf("%lld/%lld",&a[i],&b[i]);
        t=lcm(t,b[i]);
    }
    int sum=0;
    for(int i=1;i<=n;i++) sum+=(t/b[i]*a[i]);
    int o=gcd(sum,t);
    sum/=o;t/=o;
    int d1=sum/t,d2=sum%t;
    if(d1==0&&d2==0){
        cout<<0;
        return 0;
    }
    if(d1!=0) cout<<d1;
    if(d2!=0){
        if(d1!=0) cout<<" ";
        cout<<d2<<"/"<<t;
    }
    return 0;
}