//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int k, n;
    long f[1000];
    cin >> n;
    f[1] = 1;
    f[2] = 1;
    f[3] = 2;
    for (k = 4;k <= n; k++){
        f[k] = f[k - 1] + f[k - 3];
    }
    cout << f[n] << endl;
    return 0;
}