//
// Created by 15167 on 2025/3/5.
//
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int *a;//a只是一个指针，没有指向实际可用的内存空间
    a=new int;
    scanf("%d",a);
    printf("%d",*a);
    return 0;
}