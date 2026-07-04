class RegularPolygon{
    public:
    int n;
    double s;
    RegularPolygon(int x,double y):n(x),s(y){}
    double getArea(){
        return (double)n*s*s/(tan((180.0/(double)n/360.0*3.1415926*2.0))*4);
    }
    double getPerimeter(){
        return (double)n*s;
    }
};