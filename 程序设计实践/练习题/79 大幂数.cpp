#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
bool flag;
int ksm(int k,int c){
	int a=1,b=k;
	while(c){
		if(c&1) a=a*b;
		b=b*b;
		c>>=1;
	}
	return a;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    cin>>n;
	for(int i=31;i;i--){
		int sum=0;
		for(int j=1;j;j++){
			sum+=ksm(j,i);
			if(sum==n){
				flag=1;
				for(int g=1;g<=j;g++){
					cout<<g<<"^"<<i;
					if(g<j) cout<<"+";
				}
				break;
			}
			else if(sum>n) break;
		}
		if(flag) break;
	}
	if(!flag) cout<<"Impossible for "<<n<<".";
    return 0;
}