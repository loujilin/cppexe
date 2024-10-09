//
// Created by 楼吉林 on 2024/10/9.
//
#include <iostream>
#include "sstream"
using namespace std;

int main()
{
    std::string input = "42 3.14 hello";
    std::istringstream iss(input);
    int intValue;
    double doubleValue;
    std::string stringValue;
    iss >> intValue >> doubleValue >> stringValue;
    cout<<intValue<<"  "<<doubleValue<<"  "<<stringValue<<endl;
    return 0;
}