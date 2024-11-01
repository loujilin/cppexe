//
// Created by 楼吉林 on 2024/10/30.
//
#include <iostream>

using namespace std;
class Point{
private:
    double x;
    double y;
public:
    Point(double x=0,double y=0){
        this->x=x;this->y=y;
    }
    Point operator+(const Point& a){
        Point s(x+a.x,y+a.y);
        return s;
    }
    Point operator=(const Point& a){
        x=a.x;y=a.y;
        return *this;
/*       Point s(a.x+10,a.y+10);
       return s;*/

    }
    Point operator-(const Point& a){
        x=x-a.x;y=y-a.y;
        return *this;
    }
    friend Point operator+(const Point& a,const Point& b){
        Point s(a.x+b.x,a.y+b.y);
        return s;
    }
    void print(){
        cout<<x<<"  "<<y<<endl;
    }
};
int main()
{
    Point a(3,5),b(4,6);
    Point c;
    c=(a+b);
    c.print();
    c=b-a;
    c.print();
    return 0;
}