#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},b[11]={1,0,10,9,8,7,6,5,4,3,2};
string s;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
    bool flag=0;
    for(int i=1;i<=n;i++){
        cin>>s;
        int sum=0;
        for(int j=0;j<17;j++){
            int d;
            if(s[j]=='X') d=10;
            else d=s[j]-'0';
            sum+=(d*a[j]);
        }
        sum%=11;
        int t1=b[sum],t2;
        if(s[17]=='X') t2=10;
        else t2=s[17]-'0';
        if(t1!=t2){
            flag=1;
            cout<<s<<"\n";
        }
    }
    if(!flag) cout<<"All passed";
    return 0;
}