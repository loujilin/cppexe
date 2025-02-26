//
// Created by 15167 on 2025/2/11.
//
#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int n, m, d;
    cin >> n >> m >> d;

    for (int day = n - 1; day >= 1; day --) {
        d = (d + m) * 2;
    }
    cout << d;
    return 0;
}