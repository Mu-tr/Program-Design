#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1105],b[100005];
vector<int> e[1005],E;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int t=0;
    for(int i=1;i<=10;i++){
        E.clear();
        for(int j=1;j<=n;j++) if(a[j]>=i) E.push_back(j);
        if(!E.empty()){
            for(int j=1;j<=10;j++){
                for(int g=0;g<(int)E.size();g++){
                    if(E.size()>1) t++;
                    else{
                        if(b[t]!=E[g]) t++;
                        else t+=2;
                    }
                    e[E[g]].push_back(t); 
                    b[t]=E[g];
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<"#"<<i<<"\n";
        for(int j=0;j<(a[i]*10);j++){
            if(j%10) cout<<" ";
            cout<<e[i][j];
            if(j%10==9) cout<<"\n";
        }
    }
    return 0;
}