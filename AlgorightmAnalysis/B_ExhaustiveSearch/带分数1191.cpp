//
// Created by 15167 on 2025/2/10.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int abc;
// 检查是否满足条件：a + b / c == 100 且 b % c == 0
bool isValid(int a, int b, int c,int n) {
    return (b % c == 0) && (a + b / c == n);
}

// 将排列分割成 a, b, c 并验证
void checkPermutation(const vector<int>& digits,int n) {
    // a 最多有 7 位（因为 b 和 c 至少各 1 位）
    for (int aEnd = 1; aEnd <= 7; ++aEnd) {
        int a = 0;
        for (int i = 0; i < aEnd; ++i) {
            a = a * 10 + digits[i];
        }

        // b 和 c 的分割点
        for (int bEnd = aEnd + 1; bEnd <= 8; ++bEnd) {
            int b = 0, c = 0;
            for (int i = aEnd; i < bEnd; ++i) {
                b = b * 10 + digits[i];
            }
            for (int i = bEnd; i < 9; ++i) {
                c = c * 10 + digits[i];
            }

            // 验证条件
            if (isValid(a, b, c,n)) {
                //cout << "100 = " << a << " + " << b << " / " << c << endl;
                abc++;
            }
        }
    }
}

int main() {
    vector<int> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n;
    cin>>n;
    // 生成全排列并检查
    do {
        checkPermutation(digits,n);

    } while (next_permutation(digits.begin(), digits.end()));
    cout<<abc;
    return 0;
}