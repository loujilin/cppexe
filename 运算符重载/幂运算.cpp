//
// Created by 楼吉林 on 2024/10/31.
//
#include <iostream>
#include <cmath>
using namespace std;
class Power{
    double a;
public:
    Power(double x){
        a=x;
    }
    double operator^(double b){
        return pow(a,b);
    }
};
int main()
{
    Power x(2);
    double y=x^3;
    cout<<(x^3)<<endl;
    return 0;
}