//
// Created by 15167 on 2025/2/10.
//
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc,char *argv[])
{
/*    int n;
    cin>>n;
    int flag=0;
    for(int i=1;i<=1e9;i++)
    {
        int x=sqrt((i*i-1)/n);
        if(x>1e7) break;
        if(i*i-n*x*x==1 && x!=0)
        {
            cout<<"x="<<i<<endl;
            cout<<"y="<<x<<endl;
            flag=1;
            break;
        }
    }
    if(!flag) cout<<"no"<<endl;
    return 0;*/
    int n;
    cin>>n;

    long long x,y;
    for(y=1;y<=10000000;y++)
    {
        double x_squared= 1 + n * pow((double)y,2.0);
 //       if(fmod(sqrt(x_squared),1)== 0)
        x= floor(sqrt(x_squared));
        if(x*x-n * pow((double)y,2.0)==1)
        {
            x = sqrt(x_squared);
            cout<<"x="<<x<<endl;
            cout<<"y="<<y<<endl;
            return 0;
        }
    }
    cout<<"no"<<endl;
    return 0;
}