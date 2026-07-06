#include<bits/stdc++.h>
using namespace std;
int n,x;
string s;
int main(){
    cin>>n>>x;
    for(int i=1;i<=n;i*=x){
        int d=(n%(i*x))/i;
        if(d<=9) s+=('0'+d);
        else s+=('A'+d-10);
    }
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}