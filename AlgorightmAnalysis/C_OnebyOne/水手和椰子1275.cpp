//
// Created by 15167 on 2025/2/11.
//
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[]) {
    int n, m;
    cin >> n >> m;
    int p = 1;
    double x;
    x = m + n * p;
    for (int i = 1; i <= n+1; i++) {

        x = (n * x) / (n-1) + m;
        if (x != floor(x)) {
            p += 1;
            x = m + n * p;
            i = 1;
        }
    }
    cout << (int)x << endl;
/*    int i;
    double k,x,y[7];
    i=6;k=3.0;y[6]=k;
    while(i>1)
    {
        i--;
        y[i]=(y[i+1]*5+1)/4;
        if(y[i]!=floor(y[i]))
        {
            k=k+4.0;y[6]=k;i=6;
        }
    }
    x=5*y[1]+1;
    printf("原有椰子至少：%5.0f 个",x);
    printf("最后椰子数量 %5.0f",y[6]*5+1);*/
    return 0;
}