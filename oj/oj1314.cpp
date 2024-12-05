#include<iostream>
#include<iomanip>
using namespace std;
class Shape{
public:
    virtual double GetArea() = 0;
};

class Circle:public Shape{
public:
    Circle(double r):radius(r){
    }
    double GetArea(){
        return 3.14*radius*radius;
    }
private:
    double radius;
};

class Rectangle:public Shape{
public:
    Rectangle(double l,double w):length(l),width(w){
    }
    double GetArea(){
        return length*width;
    }
private:
    double length;
    double width;
};
int main(){
    string s;
    cin>>s;
    Shape* p;
    if(s=="Circle"){
        double r;
        cin>>r;
        p = new Circle(r);
    }else if(s=="Rectangle")
      {
        double a,b;
        cin>>a>>b;
        p = new Rectangle(a,b);
    }
cout<<fixed<<setprecision(2)<<p->GetArea()<<endl;
delete p;
return 0;
}