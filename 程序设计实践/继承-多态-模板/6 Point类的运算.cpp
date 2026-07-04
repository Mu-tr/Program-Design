#include<bits/stdc++.h>
using namespace std;
class Point{
    public:
    int x,y;
    Point(int a,int b):x(a),y(b){}
    Point operator + (Point a){
        Point b(x+a.x,y+a.y);
        return b;
    }
    Point operator - (Point a){
        Point b(x-a.x,y-a.y);
        return b;
    }
    Point& operator += (Point a){
        x+=a.x;y+=a.y;
        return *this;
    }
    bool operator == (Point a){
        return (x==a.x)&&(y==a.y);
    }
};
ostream& operator << (ostream& is,const Point x){
    is<<x.x<<","<<x.y;
    return is;
}