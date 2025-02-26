//
// Created by 15167 on 2025/2/19.
//
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,char *argv[])
{
    int m1,m2;
    cin>>m1>>m2;
    double s=0;
    int i=0;
    while(s<=m1)
    {
        i++;
        s=s+sqrt(i)/(i+1);
    }
    int c=i;
    do{
        i++;
        s=s+sqrt(i)/(i+1);
    }while(s<=m2);
    int d=i-1;
    cout<<c<<endl<<d;
    return 0;
}