//
// Created by 15167 on 2025/2/18.
//
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int n,i,j;
    scanf("%d",&n);
    int c=0,s;
    for(i=1;i<=(n-1)/2;i++)
    {
        s=0;
        for(j=i;j<=(n+1)/2;j++)
        {
            s=s+j;
            if(s>=n)
            {
                if(s==n){
                    c++;
                    printf("%d:%d+...+%d\n",c,i,j);
                }
            }
        }

    }
    return 0;
}