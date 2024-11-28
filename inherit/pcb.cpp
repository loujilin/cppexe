#include <iostream>
using namespace std;
class Point{
protected:
    double x;
    double y;
public:
    Point(double x=0,double y=0){
        this->x=x;this->y=y;
    }
    void MoveTo(double x1,double y1){
        x=x1;y=y1;
    }
    void display(){
        cout<<"圆心:("<<x<<","<<y<<")";
    }
};
class Circle:public Point{

};
int main(int argc, char *argv[])
{
    Circle c;
    c.display();
	return 0;
}