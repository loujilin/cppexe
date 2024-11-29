//
// Created by 楼吉林 on 2024/10/30.
//
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int a[100]={0},b[100]={0};
    int i,t;
    a[0]=1;b[0]=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        a[i]=b[i-1];
        b[i]=3*a[i-1]+2*b[i-1];
    }
    cout<<"a:"<<a[t]<<endl;
    cout<<"b:"<<b[t]<<endl;

    return 0;
}