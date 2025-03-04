//
// Created by 15167 on 2025/3/4.
//这是穷举，另外一个利用最小公倍数
#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    int n;
    scanf("%d",&n);
    for(i=2520;;i++)
    {
        if(i%4==0&&i%5==0&&i%6==0&&i%7==0&&i%8==0&&i%9==0)
        {
            if(i-i/4-i/5-i/6-i/7-i/8-i/9==n)
                break;
        }
    }
    printf("%d",i);
    return 0;
}