//
// Created by 15167 on 2025/2/11.
//
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;
double fny(double x)            // 自定义函数fny，用来定义方程式
{return 2*pow(x,2)*pow(sin(x),7)+3*pow(x,0.5)*cos(x)-exp(x)/5;}
int main()
{ int i,t=0;
    double a,b,x,x1,x2,c;
    //printf("  求方程在[a,b]中的一个解，请确定a,b: ");
    //scanf("%lf%lf",&a,&b);
    a=2,b=3;
    for(x=a;x<=b;x+=0.1)           // 初步扫描
        if(fny(x)*fny(b)<=0)         // 调用自定义函数fny()
        {x1=x;x2=b;t=1;break;}
    if(t==0)
    { printf("无解!");return 0;}
    c=0.01;
    for(i=2;i<=9;i++)              // 逐位求精
    {for(x=x1;x<=x2;x+=c)
            if(fny(x)*fny(x2)>0)       // 如果变为同号，缩小循环范围
            {x2=x;x1=x-c;break;}     // 调整循环的初值x1与终值x2
        c=c/10;                     //  缩小循环步长求精
    }
    x=(x1+x2)/2;
    int p;
    cin>>p;
    cout<<fixed;
    cout<<setprecision(p)<<x<<endl;
    //printf("  所求方程的一个解为x=%.8f",x); // 输出解，小数点后6位
    return 0;
}
