//
// Created by 楼吉林 on 2024/10/9.
//
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int a,i;
    string s;
    getline(cin,s);
    int year,month,day;
    istringstream sin(s);
    for(i=0;sin>>a;i++)
    {
        if(i==0)year=a;
        if(i==1)month=a;
        if(i==2)day=a;
    }
    cout<<i<<endl;
    cout<<year<<month<<day;
    return 0;
}