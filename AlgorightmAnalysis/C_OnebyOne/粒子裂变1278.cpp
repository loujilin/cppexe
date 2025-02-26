//
// Created by 15167 on 2025/2/11.
//
#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int t;
    cin >> t;

    int cnt[1000];
    cnt[0] = 0;
    cnt[1] = 3;
    for (int i = 2; i <= t; i ++) {
        cnt[i] = 2 * cnt[i - 1] + 3 * cnt[i - 2];
    }
    cout << "a:" << cnt[t - 1] << endl;
    cout << "b:" << cnt[t];
    return 0;
}