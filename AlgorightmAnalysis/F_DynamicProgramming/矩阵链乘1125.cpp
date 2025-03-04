//
// Created by 15167 on 2025/3/4.
//
#include<cstdlib>
#include<iostream>
#include <cstring>
using namespace std;
void Print_OPTIMAL_PARENS(int s[101][101],int i,int j)
{
    if(i==j)
        cout<<'A'<<i;
    else
    {
        cout<<"(";
        Print_OPTIMAL_PARENS(s,i,s[i][j]);
        Print_OPTIMAL_PARENS(s,s[i][j]+1,j);
        cout<<")";
    }
}
int main()
{
    int N;
    cin>>N;
    int matrix[101];
    int i,j,k,q;
    int m[101][101];
    int s[101][101];
    for(i=0;i<=N;i++)
        cin>>matrix[i];
    memset(m,0,(N+1)*(N+1)*sizeof(int));
    for(j=1;j<=N;j++)
        for (i=j;i>=1;i--)
        {
            if (j==i)
                m[i][j]=0;
            else
            {
                m[i][j]=600000;
                for (k=i;k<j;k++)
                {
                    q=m[i][k]+m[k+1][j]+matrix[i-1]*matrix[k]*matrix[j];
                    if (q<m[i][j])
                    {
                        m[i][j]=q;
                        s[i][j]=k;
                    }
                }
            }
        }
    cout<<m[1][N]<<endl;
    Print_OPTIMAL_PARENS(s,1,N);
    return 0;
}