//
// Created by 15167 on 2025/2/11.
//
#include <stdio.h>
int Comm(int n,int k)
{
    if(n<1||k<0||k>n)
        return 0;
    if(k==0)
        return 1;
    if(n==k)
        return 1;
    return Comm(n-1,k-1)+Comm(n-1,k);
}
int main()
{
    int a,b,s;
    scanf("%d %d",&a,&b);
    s=Comm(a,b);
    printf("%d",s);
    printf("\n");
    return 0;
}


