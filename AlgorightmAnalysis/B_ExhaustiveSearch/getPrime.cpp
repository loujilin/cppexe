//
// Created by 15167 on 2025/2/11.
//
// test10.cpp : 定义控制台应用程序的入口点。
//埃氏筛法
/*
详细列出算法如下：
列出2以后的所有序列：
2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
标出序列中的第一个素数，也就是2，序列变成：
2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
将剩下序列中，划掉2的倍数，序列变成：
2 3 5 7 9 11 13 15 17 19 21 23 25
如果现在这个序列中最大数小于最后一个标出的素数的平方，那么剩下的序列中所有的数都是素数，否则回到第二步。
本例中，因为25大于2的平方，我们返回第二步：
剩下的序列中第一个素数是3，将主序列中3的倍数划掉，主序列变成：
2 3 5 7 11 13 17 19 23 25
我们得到的素数有：2，3
25仍然大于3的平方，所以我们还要返回第二步：
现在序列中第一个素数是5，同样将序列中5的倍数划掉，主序列成了：
2 3 5 7 11 13 17 19 23
我们得到的素数有：2，3，5 。
因为23小于5的平方，跳出循环.
*/


#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    long num=2000;
    int sq=sqrt(num*1.0)+1;
    bool *isPrime=new bool[num+1];
    //初始化
    for(long i=2; i<num+1; i++)
    {
        isPrime[i]=true;
    }
    for(long i=2; i<sq; i++)
    {
        if(isPrime[i]==true)
        {
            for(long j=2; j<num+1; j++)
            {
                if(j%i==0 && i!=j)
                {
                    isPrime[j]=false;
                }
            }
        }
    }
    long long sum=0;
    for(long j=2; j<num+1; j++)
    {
        if(isPrime[j]==true)
        {
            sum=sum+j;
            cout<<j<<"  ";
        }
    }
    //cout<<sum<<endl;
    delete []isPrime;
    system("pause");
    return 0;
}