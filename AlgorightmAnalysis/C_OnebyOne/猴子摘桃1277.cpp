//
// Created by 15167 on 2025/2/11.
//
#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int n;
    cin >> n;

    int ans = 1;
    for (int day = n - 1; day >= 1; day --) {
        ans = (ans + 1) * 2;
    }
    cout << ans;
    return 0;
}