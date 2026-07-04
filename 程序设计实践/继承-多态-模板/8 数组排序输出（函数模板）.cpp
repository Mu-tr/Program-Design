#include<bits/stdc++.h>
template <class T>
void sort(T* a,int sz){
    for(int i=0;i<sz;i++) cin>>a[i];
    sort(a,a+sz);
}