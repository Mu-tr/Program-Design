#include<algorithm>
template <class T>
class MyArray{
    public:
    T* data;
    int size;
    MyArray(int x):size(x){
        data=new T[x];
    }
    ~MyArray();
    bool check();
    void sort(){
        for(int i=0;i<size;i++) cin>>data[i];
        std::sort(data,data+size);
    }
    void display(){
        for(int i=0;i<size;i++){
            if(i) cout<<" ";
            cout<<data[i];
        }
        cout<<"\n";
    }
};