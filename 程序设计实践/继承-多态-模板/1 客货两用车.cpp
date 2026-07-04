class CAR{
    protected:
    double speed;
    public:
    CAR(double x):speed(x){
        cout<<"创建汽车("<<x<<"公里/小时)\n";
    }
    virtual ~CAR(){
        cout<<"销毁汽车("<<speed<<"公里/小时)\n";
    }
    virtual void Show(){
        cout<<"汽车: "<<speed<<"公里/小时\n";
    }
};
class BUS:virtual public CAR{
    protected:
    int seat;
    public:
    BUS(double x,int y):CAR(x),seat(y){
        cout<<"创建客车("<<y<<"人)\n";
    }
    ~BUS(){
        cout<<"销毁客车("<<seat<<"人)\n";
    }
    void Show(){
        cout<<"客车: "<<speed<<"公里/小时, "<<seat<<"人\n";
    }
};
class TRUCK:virtual public CAR{
    protected:
    double load;
    public:
    TRUCK(double x,double y):CAR(x),load(y){
        cout<<"创建货车("<<y<<"吨)\n";
    }
    ~TRUCK(){
        cout<<"销毁货车("<<load<<"吨)\n";
    }
    void Show(){
        cout<<"货车: "<<speed<<"公里/小时, "<<load<<"吨\n";
    }
};
class VAN:public BUS,TRUCK{
    public:
    VAN(double x,int y,double z):CAR(x),BUS(x,y),TRUCK(x,z){
        cout<<"创建客货两用车\n";
    }
    ~VAN(){
        cout<<"销毁客货两用车\n";
    }
    void Show(){
        cout<<"客货两用车: "<<speed<<"公里/小时, "<<seat<<"人, "<<load<<"吨\n";
    }
};