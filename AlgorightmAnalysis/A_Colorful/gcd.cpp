//
// Created by 15167 on 2025/2/10.
//
#include <iostream>

using namespace std;

int gcd(int m,int n){
    int r;
    do{
        r=m%n;
        m=n;n=r;
    }while(r>0);
    return m;
}

int main(int argc,char *argv[])
{
    int m,n;
    //scanf("%d%d",&m,&n);
    cin>>m>>n;
    cout<<gcd(m,n)<<endl;
    return 0;
}