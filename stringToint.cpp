//
// Created by 楼吉林 on 2024/10/8.
//
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s="2023-11-02";
    stringstream ss(s),ss1;
    string a;
    int b;
    while(getline(ss,a,'-')){
        ss1<<a;
        ss1>>b;
        ss1.str("");
        ss1.clear();
        cout<<b<<endl;

    }
    return 0;
}