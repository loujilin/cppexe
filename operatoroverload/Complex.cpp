//
// Created by 15167 on 2024/12/10.
//
#include <iostream>
using namespace std;
class Complex
{
protected:
    double x;
    double y;
public:
    Complex(double a=0,double b=0)
    {
        x=a;y=b;
    }
    Complex operator=(Complex b)
    {
        this->x=b.x;this->y=b.y;
        return *this;
    }
    Complex operator+(const Complex b)
    {
        Complex aaa(x,y);
        aaa.x+=b.x;aaa.y+=b.y;
        return aaa;
    }
    Complex operator-(const Complex b)
    {
        Complex aaa(x,y);
        aaa.x-=b.x;aaa.y-=b.y;
        return aaa;
    }
    Complex operator*(const Complex b)
    {
        Complex aaa(x,y);
        double xx,yy;
        xx=(b.x*aaa.x-b.y*aaa.y);yy=(b.y*aaa.x+b.x*aaa.y);
        aaa.x=xx;aaa.y=yy;
        return aaa;
    }
    Complex operator*(double c)
    {
        Complex aaa(x,y);
        aaa.x*=c;aaa.y*=c;
        return aaa;
    }
    void print()
    {
        if(y==0)
        {
            cout<<x;
        }
        else
        {
            cout<<x;
            if(y>0)
                cout<<"+"<<y<<"i";
            else
                cout<<y<<"i";
        }
    }
};
int main(int argc, char *argv[])
{
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    Complex aa(a,b);
    Complex bb(c,d);
    Complex cc(e,f);
    Complex dd;
    dd=aa+bb+cc;dd.print();
    cout<<endl;
    dd=aa*cc*bb;dd.print();
    return 0;
}