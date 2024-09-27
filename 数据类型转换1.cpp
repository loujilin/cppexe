//
// Created by 楼吉林 on 2024/9/27.
//
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char *argv[])
{
    int a=1234;
    double b;
    string sa;
    stringstream ss;
    ss<<a;//把a放入到s中
    ss>>sa;//再把s流中的内容输出到sa字符串中
    cout<<sa.substr(0,2)<<endl;
    ss.str("");
    ss.clear();//清除stringsteam对象的内容
    sa="3.1415926";
    ss<<sa;
    ss>>b;
    cout<<b<<endl;
    ss.str("");
    ss.clear();//清除stringsteam对象的内容
    sa="17:00";
    int pos=sa.find(':');
    cout<<pos<<endl;
    string temp;
    int hour;
    temp=sa.substr(0,pos);
    ss<<temp;
    ss>>hour;
    //cout<<hour;
    ss.str("");
    ss.clear();//清除stringsteam对象的内容

    if(hour>12)
    {
        ss<<hour-12<<sa.substr(pos)<<"PM"<<3.1415;
        ss>>temp;
        cout<<temp<<endl;
    }
    else
    {
        cout<<sa<<"AM"<<endl;
    }





    return 0;
}