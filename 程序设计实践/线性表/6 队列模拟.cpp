#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
queue<int> q;
signed main(){
    while(1){
        cin>>n;
        if(n>0){
            if((int)q.size()<10) q.push(n);
            else{
                cout<<"Queue is full!\n";
                break;
            }
        }
        else if(n<0){
            if(q.empty()){
                cout<<"wrong\n";
                break;
            }
            else q.pop();
        }
        else break;
    }
    if(!q.empty()){
        cout<<"The Queue is:";
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
    }
    return 0;
}