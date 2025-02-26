//
// Created by 15167 on 2025/2/11.
//
#include <iostream>
using namespace std;
int n;
int f(int n) {
    if (n == 0 || n == 1) return 0;
    if (n == 2) return 1;

    return (n - 1) * (f(n - 1) + f(n - 2));
}
int main(int argc, char *argv[])
{
    cin >> n;

    cout << f(n);

    return 0;
}