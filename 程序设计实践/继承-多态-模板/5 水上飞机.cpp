class CRAFT
{
public:
    CRAFT(double speed1)
    {
        speed=speed1;
        cout<<"创建航行器"<<"(速度: "<<speed<<")"<<endl;
    }
    virtual ~CRAFT()
    {
         cout<<"销毁航行器"<<"(速度: "<<speed<<")"<<endl;
    }
    virtual void Show()
    {
        cout<<"航行"<<"(速度: "<<speed<<")"<<endl;
    }
protected:
    double speed;
};
class PLANE:virtual public CRAFT
{
public:
    PLANE(double speed2,double width2): CRAFT(speed2)
    {
        speed=speed2;
        width=width2;
        cout<<"创建飞机"<<"(翼展: "<<width<<")"<<endl;
    }
    virtual ~PLANE()
    {
        cout<<"销毁飞机"<<"(翼展: "<<width<<")"<<endl;
    }
    virtual void Show ()
    {
        cout<<"航行"<<"(速度: "<<speed<<", "<<"翼展: "<<width <<")"<<endl;
    }
protected:
    double width;
};
class SHIP:virtual public CRAFT
{
public:
     SHIP(double speed3,double depth3): CRAFT(speed3)
     {
         speed=speed3;
         depth=depth3;
         cout<<"创建船"<<"(吃水: "<<depth<<")"<<endl;
     }
     virtual ~ SHIP()
     {
        cout<<"销毁船"<<"(吃水: "<<depth<<")"<<endl;
     }
     virtual void Show()
     {
         cout<<"航行"<<"(速度: "<<speed<<", "<<"吃水: "<<depth <<")"<<endl;
     }
   protected:
   double depth;
};
class SEAPLANE :virtual public PLANE,public SHIP 
{
public:
    SEAPLANE(double speed4,double width4,double depth4): CRAFT(speed4),PLANE(speed4,width4),SHIP (speed4,depth4)
     {
         speed=speed4;
         depth=depth4;
         width=width4;
         cout<<"创建水上飞机\n";
     }
     virtual ~ SEAPLANE()
     {
        cout<<"销毁水上飞机\n";
     }
     virtual void Show()
     {
         cout<<"航行"<<"(速度: "<<speed<<", "<<"翼展: "<<width<<", "<<"吃水: "<<depth <<")"<<endl;
     }
};