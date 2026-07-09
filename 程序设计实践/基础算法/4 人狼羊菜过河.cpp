#include<bits/stdc++.h>
#define int long long
using namespace std;
bool v[25];
char ans[4]={'M','W','G','C'};
struct ok{
    pair<int,int> a;
}S,T;
istream& operator >> (istream& is,ok &x){
    string s1,s2,s3;
    is>>s1>>s2>>s3;
    int d1=0,d2=0;
    for(int i=0;i<4;i++){
        if(s1[i]!='.') d1+=(1<<i);
        if(s3[i]!='.') d2+=(1<<i);
    }
    x.a=make_pair(d1,d2);
    return is;
}
ostream& operator << (ostream& is,ok x){
    string s;
    if(x.a.first&1) s="->";
    else s="<-";
    for(int i=0;i<4;i++){
        if(x.a.first&(1<<i)) cout<<ans[i];
        else cout<<".";
    }
    cout<<" "<<s<<" ";
    for(int i=0;i<4;i++){
        if(x.a.second&(1<<i)) cout<<ans[i];
        else cout<<".";
    }
    return is;
}
map<pair<int,int>,int> mp;
vector<ok> e;
vector<vector<ok>> E;
void dfs(pair<int,int> x){
    if(v[x.first]||v[x.second]||mp[x]) return;
    mp[x]=1;
    e.push_back((ok){x});
    if(x==T.a){
        E.push_back(e);
        mp[x]=0;
        e.pop_back();
        return;
    }
    if(x.first&1){
        for(int i=1;i<4;i++){
            if(x.first&(1<<i)){
                int t=(1<<i)+1;
                dfs(make_pair(x.first-t,x.second+t));
            }
        }
        dfs(make_pair(x.first-1,x.second+1));
    }
    else{
        for(int i=1;i<4;i++){
            if(x.second&(1<<i)){
                int t=(1<<i)+1;
                dfs(make_pair(x.first+t,x.second-t));
            }
        }
        dfs(make_pair(x.first+1,x.second-1));
    }
    mp[x]=0;
    e.pop_back();
}
signed main(){
    v[12]=v[6]=v[14]=1;
    cin>>S>>T;
    if(S.a==T.a){
        cout<<"None";
        return 0;
    }
    dfs(S.a);
    if(E.empty()) cout<<"None";
    else{
        for(int i=0;i<(int)E.size();i++){
            if(i) cout<<"\n";
            for(int j=0;j<(int)E[i].size();j++){
                cout<<E[i][j]<<"\n";
            }
        }
    }
    return 0;
}
/*
人 1
狼 2
羊 4
菜 8
不合法：6 12 14
*/