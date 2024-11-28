//
// Created by 楼吉林 on 2024/10/31.
#include <iostream>
#include <iomanip>
using namespace std;
//A× B = (AxBy - AyBx)i + (AzBx - AxBz)j + (AxBy - AyBx)k
class Cross{
    double a,b,c;
public:
    Cross(double A=0,double B=0,double C=0){
        a=A;b=B;c=C;
    }
    friend Cross operator*(Cross x,Cross y){
        return Cross(x.b*y.c-x.c*y.b,x.c*y.a-x.a*y.c,x.a*y.b-x.b*y.a);
    }
    void print(){
        cout<<fixed;
        cout<<setprecision(2);
        cout<<a<<"  "<<b<<"  "<<c<<endl;
    }
};
int main()
{
    Cross a(1.13,2.2,3.3),b(3.1,2.2,1.3);
    Cross c=a*b;
    c.print();
    return 0;
}