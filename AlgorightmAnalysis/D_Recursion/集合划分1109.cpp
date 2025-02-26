//
// Created by 15167 on 2025/2/18.
//
#include<iostream>
using namespace std;

int f(int n,int m)
{
    if(m==1||n==m)
        return 1;
    else
        return f(n-1,m-1)+f(n-1,m)*m;
}

int main()
{
    int n;
    while(cin>>n&&n>=1)
    {
        int i;
        long long sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=f(n,i);
        }

        printf("%lld\n",sum);
    }
    return 0;
}