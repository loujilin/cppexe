//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
using namespace std;
int a[100];//100个数以内
int f(int n){
    if(a[n]==0)
        a[n]=f(n-1)+f(n-2);

    return a[n];
}

int main(int argc,char *argv[])
{
    a[0]=a[1]=a[2]=1;
    cout<<f(10);
    return 0;
}