//
// Created by 15167 on 2025/3/4.
//这是穷举，另外一个利用最小公倍数
#include <stdio.h>
#include "iostream"
#include "vector"
using namespace std;
void swap(int& a,int& b){
    int t;
    t=a;a=b;b=t;
}
int gcd(int a,int b)
{
    if(b > a)
        swap(a,b);
    int c;
    do
    {
        c = a % b;
        a = b;
        b = c;
    }while(c > 0);

    return a;
}
int lcm(int a,int b)
{
    return (a * b) / gcd(a,b);
}
int main(int argc, char *argv[])
{
    long long i;
    int n;
    vector<int> num={4,5,6,7,8,9};
    scanf("%d",&n);
    long long t;
    int x=num[0];
    for(int j=1;j<num.size();j++){
        x=lcm(x,num[j]);
    }
    for(i=x;;i++)
    {
        if(i%4==0&&i%5==0&&i%6==0&&i%7==0&&i%8==0&&i%9==0)
        {
            if(i-i/4-i/5-i/6-i/7-i/8-i/9==n)
                break;
        }
        if(i>99999999999)
        {
            cout<<"no";
            break;
        }

    }
    printf("%d",i);
    return 0;
}