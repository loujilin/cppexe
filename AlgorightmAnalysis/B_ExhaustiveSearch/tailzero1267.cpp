//
// Created by 15167 on 2025/2/10.
//
#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int n;
    cin>>n;
    int count=0;
    while(n){
        count+=n/5;
        n/=5;
    }
    cout<<count;
    return 0;
}