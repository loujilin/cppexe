//
// Created by 15167 on 2024/12/20.
//
#include<iostream>
#include<algorithm>
using namespace std;
int main() {

    int n;
    cin >> n;
    int pre[110];
    for (int i = 0; i < n; i++) {
        cin >> pre[i];
    }
    int left = 0;
    int right = 0;
    for (int i = 1; i < n; i++) {
        if (pre[i]<0 && abs(pre[i])>abs(pre[0]))
            left++;
        if (pre[i] > 0 && abs(pre[i]) < abs(pre[0]))
            right++;
    }
    cout << left + right + 1 << endl;
    return 0;
}