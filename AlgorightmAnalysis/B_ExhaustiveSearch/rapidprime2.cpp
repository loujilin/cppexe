//
// Created by 15167 on 2025/3/5.
//
#include <iostream>
#include <cmath>
using namespace std;
int a[10000002];
int main(int argc, char *argv[])
{

    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
        a[i]=1;
//	memset(a,0,101*sizeof(int));
    for(int i=2;i<=sqrt(n);i++)//
    {
        if(a[i]==1)
        {//假设i=5
            for(int j=i;i*j<=n;j++)
                a[j*i]=0;
        }
    }
    int count=0;
    for(int i=2;i<=n;i++)
        if(a[i]==1)
            count++;
    cout<<count<<endl;
    return 0;
}