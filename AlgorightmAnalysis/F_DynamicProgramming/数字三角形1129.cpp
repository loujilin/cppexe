//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    int s[101][101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int r=n-2;r>=0;r--)
    {
        for(int c=0;c<=r;c++)
        {
            if(s[r+1][c]>s[r+1][c+1])
            {
                s[r][c]+=s[r+1][c];
            }

            else
            {
                s[r][c]+=s[r+1][c+1];
            }
        }
    }
    cout<<s[0][0]<<endl;
    return 0;
}