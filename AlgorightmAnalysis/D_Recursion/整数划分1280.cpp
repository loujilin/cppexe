//
// Created by 15167 on 2025/2/11.
//
#include<iostream>
using namespace std;
int q(int n,int m) {
    if ((n < 1) || (m < 1))return 0;
    if ((n == 1) || (m == 1))return 1;
    if (n < m)return q(n, n);
    if (n == m)return q(n, m - 1) + 1;
    return q(n, m - 1) + q(n - m, m);
}
int main() {
    int n;
    cin >> n;
    cout << q(n, n) << endl;
    return 0;
}