#include<bits/stdc++.h>
#define int long long
using namespace std;
struct ok{
    int R,C;
    vector<vector<int>> a;
    ok operator * (ok A){
        ok B;
        B.R=R;B.C=A.C;
        if(C!=A.R){
            cout<<"Error: "<<C<<" != "<<A.R;
            return B;
        }
        B.a.resize(B.R);
        for(int i=0;i<R;i++) B.a[i].resize(B.C);
        for(int i=0;i<R;i++){
            for(int j=0;j<A.C;j++){
                for(int g=0;g<C;g++){
                    B.a[i][j]+=(a[i][g]*A.a[g][j]);
                }
            }
        }
        cout<<B.R<<" "<<B.C<<"\n";
        for(int i=0;i<R;i++){
            for(int j=0;j<A.C;j++){
                if(j) cout<<" ";
                cout<<B.a[i][j];
            }
            cout<<"\n";
        }
        return B;
    }
}a,b;
istream& operator >> (istream& is,ok& x){
    is>>x.R>>x.C;
    x.a.resize(x.R);
    for(int i=0;i<x.R;i++){
        x.a[i].resize(x.C);
        for(int j=0;j<x.C;j++) cin>>x.a[i][j];
    }
    return is;
}
signed main(){
    cin>>a>>b;
    a*b;
    return 0;
}