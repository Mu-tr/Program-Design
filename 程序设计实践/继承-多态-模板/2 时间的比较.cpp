char ch1,ch2;
class TIME{
    public:
    int a,b,c;
    TIME():a(0),b(0),c(0){}
    TIME(int x):a(x),b(0),c(0){}
    TIME(int x,int y):a(x),b(y),c(0){}
    TIME(int x,int y,int z):a(x),b(y),c(z){}
    int js(){
        return a*60*60+b*60+c;
    }
    bool operator > (TIME x){
        return js()>x.js();
    }
};
bool operator > (int x,TIME y){
    TIME a(x);
    return a>y;
}
istream& operator >>(istream& is,TIME &x){
    is>>x.a>>ch1>>x.b>>ch2>>x.c;
    return is;
}
ostream& operator <<(ostream& is,const TIME x){
    is<<setw(2)<<setfill('0')<<x.a<<":"<<setw(2)<<setfill('0')<<x.b<<":"<<setw(2)<<setfill('0')<<x.c;
    return is;
}