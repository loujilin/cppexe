//
// Created by 15167 on 2025/2/18.
//
#include <iostream>
using namespace std;
void Swap(char &a,char &b)
{
    char t=a;
    a=b;
    b=t;
}
int ok(char c[],int k,int i)
{//是否有重复，就看ok函数是否使用
    if(i>k)
        for(int t=k;t<i;t++)
            if(c[t]==c[i])
                return 0;
    return 1;
}
void Perm(char c[],int k,int m)
{
    if(k==m)
    {
        for(int i=0;i<=m;i++)
            cout<<c[i];
        cout<<endl;
    }
    else
    {
        for(int i=k;i<m;i++)
        {
/*            if(ok(c,k,i))
            {*/
                Swap(c[k],c[i]);
                Perm(c,k+1,m);
                Swap(c[k],c[i]);
/*            }*/
        }
    }
}
int main()
{
    int n;
    char a[20];
    cin>>n>>a;
    Perm(a,0,n);
    return 0;
}