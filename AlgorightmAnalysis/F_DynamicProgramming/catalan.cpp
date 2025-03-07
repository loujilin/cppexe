//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
typedef long long ll;
using namespace std;
const int maxn = 20;
int n;
ll f1[maxn], f2[maxn];
ll f[maxn * 2][maxn];
//公式1:
int solve1() {
    f1[0] = f1[1] = 1;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            f1[i] += (f1[j] * f1[i-j-1]); //f(n)=f(0)f(n-1)+f(1)f(n-2)+...+f(n-1)f(0)
        }
    }
    printf("%lld\n",f1[n]);
    return 0;
}
//公式2:
int solve2() {
    f2[0] = f2[1] = 1;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        f2[i] += f2[i - 1] * (4 * i - 2) / (i + 1); //f(n)=f(n-1)*(4*n-2)/(n+1)
    }
    printf("%lld\n", f2[n]);
    return 0;
}
//公式3:
int solve3() {
    cin >> n;
    for(int i = 1; i <= 2 * n; i++) {
        f[i][0] = f[i][i] = 1;
        for(int j = 1; j < i; j++) {
            f[i][j] = f[i - 1][j] + f[i - 1][j - 1]; //f(n)=c(2n,n)/(n+1)
        }
    }
    printf("%lld",f[2 * n][n] / (n + 1));
    return 0;
}
int main() {
    solve1();
    solve2();
    solve3();
    return 0;
}