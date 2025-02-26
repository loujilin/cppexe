//
// Created by 15167 on 2025/2/18.
//
/*
#include<iostream>

using namespace std;

long long h[20+2]={1,1},n;

int main()

{

    cin>>n;

    for(int i=2;i<=n;i++)

        h[i]=h[i-1]*(4*i-2)/(i+1);

    cout<<h[n]<<endl;

    return 0;

}*/
/*
#include <iostream>
using namespace std;
long long h[10 + 2] = {1 , 1}, n;
int main(int argc, char *argv[])
{
    cin >> n;
    for (int i = 1; i <= n; i ++){
        h[i] = h[i - 1] * (4 * i - 2) / (i + 1);
    }
    cout << h[n] << endl;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
// dp[i][j] = dp[i-1][j-1] +dp[i-1][j]
int main(){
    long long dp[50][50]={0},n;
    cin>>n;
    dp[0][0]=1;
    for(int i=1;i<=n+n;i++){
        for(int j=1;j<=n;j++){
            if(j+j>=i)dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }cout<<dp[n+n][n]<<endl;
    return 0;
}*/
#include <iostream>
#include <stdio.h>
long f(int j,int i)
{//j:50元数量，i:100元数量
    long y;
    if(i==0) y=1;
    else if(j<i) y=0;           // 确定初始条件
    else y=f(j-1,i)+f(j,i-1);   //  实施递归
    return(y);
}

using namespace std;
int main(int argc, char* argv[])
{
    int m,n;
    printf(" input m,n: "); scanf("%d%d",&m,&n);
    printf("  f(%d,%d)=%ld.\n",m,n,f(m,n));

    return 0;
}