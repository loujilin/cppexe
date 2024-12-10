//
// Created by 15167 on 2024/12/10.
//
#include<iostream>
#include<iomanip>
using namespace std;
#define PI 3.14
class Point{
protected:
    double x;
    double y;
public:
    Point(double x1,double y1)
    {
        x=x1;
        y=y1;
    }
    virtual double area()
    {
        return 0;
    }
};
class Circle:public Point{
protected:
    double r;
public:
    Circle(double x,double y,double r1):Point(x,y),r(r1)
    {

    }
    virtual double area()
    {
        return PI*r*r;
    }
};
class Sphere:public Circle{
protected:
    double z;
public:
    Sphere(double x,double y,double z1,double r):Circle(x,y,r),z(z1)
    {

    }
    virtual double area()
    {
        return 4.0*PI*r*r;
    }
};
class Cylinder:public Sphere{
protected:
    double h;
public:
    Cylinder(double x,double y,double r,double h1,double z=0):Sphere(x,y,z,r),h(h1)
    {

    }
    virtual double area()
    {
        return (2.0*PI*r*r+2.0*PI*r*h);
    }
};
void f(Point& p)
{
    cout<<fixed;
    cout<<setprecision(2)<<p.area()<<endl;
}
int main(){
    char ch;
    double x,y,z,r,h;
    cin>>ch;
    if(ch=='c')
    {
        cin>>x>>y>>r;
        Circle c(x,y,r);
        f(c);
    }
    else if(ch=='s')
    {
        cin>>x>>y>>z>>r;
        Sphere s(x,y,z,r);
        f(s);
    }
    else if(ch=='y')
    {
        cin>>x>>y>>r>>h;
        Cylinder y1(x,y,r,h);
        f(y1);
    }
    return 0;
}