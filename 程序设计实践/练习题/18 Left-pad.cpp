#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
char ch;
string s;
signed main(){
    cin>>n>>ch;
    cin.ignore();
    getline(cin,s);
    if(n<=(int)s.size()){
        for(int i=s.size()-n;i<s.size();i++) cout<<s[i];
    }
    else{
        for(int i=1;i<=(n-s.size());i++) cout<<ch;
        cout<<s;
    }
    return 0;
}