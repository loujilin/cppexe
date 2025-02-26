#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


void generate_derangement(vector<int>& nums, int index, int n, int& count) {
    if (index == n) {
        bool is_derangement = true;
        for (int i = 0; i < n; ++i) {
            if (nums[i] == i + 1) {
                is_derangement = false;
                break;
            }
        }
        if (is_derangement) {
            for (int i = 0; i < n; ++i) {
                cout << nums[i];
            }
            cout << endl;
            count++;
        }
        return;
    }

    for (int i = index; i < n; ++i) {
        swap(nums[index], nums[i]);
        generate_derangement(nums, index + 1, n, count);
        swap(nums[index], nums[i]);
    }
}

int main() {
    string input;
    cin >> input;

    int n = input.size();
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        nums[i] = input[i] - '0';
    }

    int count = 0;
    generate_derangement(nums, 0, n, count);

    cout  << count << endl;

    return 0;
}