#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
    virtual void Run(){
        cout<<"Vehicle run\n";
    }
};
class Bicycle:public Vehicle{
    public:
    void Run(){
        cout<<"Bicycle run\n";
    }
};
class Motorcar:public Vehicle{
    public:
    void Run(){
        cout<<"Motorcar run\n";
    }
};
void run(Vehicle& x){
    x.Run();
}