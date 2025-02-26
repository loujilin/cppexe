//
// Created by 15167 on 2025/2/10.
//
#include <iostream>
#define  MAX 50
using namespace std;

int main(int argc,char *argv[])
{
    int arr[MAX][MAX] = { 0 };//这里限制了幻方的大小，大家可以自行修改
    int n = 0;
    int k = 2;
    cin>>n;//n得是奇数，
    arr[0][n / 2] = 1;//这个就是初始的K
    arr[n-1][n/2+1]=2;//进一步限定答案
    int a = 0;//行
    int b = n / 2;//列
    for (int i = 1; i <= n * n; i++)
    {
        if (a == 0 && b != n - 1)//在第一行但不在最后一列
        {
            arr[n - 1][b + 1] = k;
            a = n - 1;
            b = b + 1;
        }
        else if (a != 0 && b == n - 1)//不在第一行但在最后一列
        {
            arr[a - 1][0] = k;
            a = a - 1;
            b = 0;
        }
        else if (a == 0 && b == n - 1)//在第一行最后一列
        {
            arr[a + 1][b] = k;
            a = a + 1;
        }
        else if (a != 0 && b != n - 1)//既不在第一行也不在最后一列
        {
            if (arr[a - 1][b + 1] == 0)
            {
                arr[a - 1][b + 1] = k;
                a = a - 1;
                b = b + 1;
            }
            else
            {//撞衫后，放当前那个的数下面
                arr[a + 1][b] = k;
                a = a + 1;
            }
        }
        k++;
    }
    for (int i = 0; i < n; i++)//打印数组->幻方
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}