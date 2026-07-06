#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[10][10];
signed main(){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=4;j++) cin>>a[i][j];
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=4;j++){
			int d=a[i][j];
			bool f=1;
			for(int g=1;g<=4;g++){
				if(a[i][g]>d) f=0;
			}
			for(int g=1;g<=3;g++){
				if(a[g][j]<d) f=0;
			}
			if(f){
                cout<<"鞍点是"<<d<<",位于"<<i-1<<"行"<<j-1<<"列";
				return 0;
			}
		}
	}
	cout<<"不存在鞍点";
	return 0;
}
