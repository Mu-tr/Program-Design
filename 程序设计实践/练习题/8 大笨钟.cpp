#include<bits/stdc++.h>
#define int long long
using namespace std;
int t1,t2;
signed main(){
    scanf("%lld:%lld",&t1,&t2);
    int d;
    if(t2==0) d=t1;
    else d=t1+1;
    d-=12;
    if(d>0){
        for(int i=1;i<=d;i++) cout<<"Dang";
    }
    else{
        cout<<"Only ";
        cout<<setw(2)<<setfill('0')<<t1<<":";
        cout<<setw(2)<<setfill('0')<<t2<<".  Too early to Dang.";
    }
    return 0;
}