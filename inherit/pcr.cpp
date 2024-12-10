//
// Created by 15167 on 2024/12/10.
//
#include <iostream>
#include <iomanip>
using namespace std;
class Shape {
public:
    virtual double getArea() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double getArea() {
        return length * width;
    }
};
void fn(Shape& s){
    cout << fixed << setprecision(2) << s.getArea() << endl;

}
int main() {
    string shapeType;
    cin >> shapeType;
    if (shapeType == "Circle") {
        double radius;
        cin >> radius;
        Circle circle(radius);
        fn(circle);
    } else if (shapeType == "Rectangle") {
        double length, width;
        cin >> length >> width;
        Rectangle rectangle(length, width);
        fn(rectangle);
    }
    return 0;
}