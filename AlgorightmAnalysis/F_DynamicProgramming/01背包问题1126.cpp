//
// Created by 15167 on 2025/3/4.
//
#include<iostream>
#include<cstring>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int dp[101][1001],m,T,w[101],val[101],i,j;
    while(cin>>T>>m)
    {
        for(i=1;i<=m;i++)
        {
            cin>>w[i]>>val[i];
        }
        memset(dp,0,sizeof(dp));
        for(i=1;i<=m;i++)
        {
            for(j=0;j<=T;j++)
            {
                if(j>=w[i])
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+val[i]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        cout<<dp[m][T]<<endl;
    }
    return 0;
}