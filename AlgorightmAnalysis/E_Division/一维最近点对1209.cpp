//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> points;
    int input;

    while (cin >> input && input != -1) {
        points.push_back(input);
    }

    if (points.size() < 2) {
        cout << "Error: Not enough elements provided.\n";
        return 1;
    }

    sort(points.begin(), points.end());

    int min_distance = points[1] - points[0];

    for (size_t i = 2; i < points.size(); ++i) {
        int current_distance = points[i] - points[i - 1];
        if (current_distance < min_distance) {
            min_distance = current_distance;
        }
    }

    cout << min_distance << endl;

    return 0;
}