#include<bits/stdc++.h>
#define int long long
using namespace std;
char ch;
int n;
string s[105];
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>ch>>n;
    cin.ignore();
    for(int i=0;i<n;i++) getline(cin,s[i]);
    bool flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]!=s[n-1-i][n-1-j]) flag=0;
        }
    }
    if(flag) cout<<"bu yong dao le\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[n-1-i][n-1-j]=='@') cout<<ch;
            else cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}