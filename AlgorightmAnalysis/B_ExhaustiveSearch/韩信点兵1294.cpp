//
// Created by 15167 on 2025/2/11.
//
#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int a[9], b[9];
    for (int i = 1;i <= 8;i++) {
        cin >> a[i];
    }
    for (int i = 1;i <= 8;i++) {
        cin >> b[i];
    }
    for (int i = 1;;i++) {
        if (i % a[1] == b[1] && i % a[2] == b[2] && i % a[3] == b[3] && i % a[4] == b[4] && i % a[5] == b[5] && i % a[6] == b[6] && i % a[7] == b[7] && i % a[8] == b[8]) {
            cout << i;
            break;
        }
    }
    return 0;
}