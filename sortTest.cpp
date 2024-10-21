//
// Created by 楼吉林 on 2024/10/21.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;
int main() {
    // 创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());
    std::ofstream file("random_numbers10w.txt");
    // 生成随机数并存储到向量中
    vector<int> numbers;
    int temp;
    int numCount = 99999; // 生成100个随机数
    for (int i = 0; i < numCount; ++i) {
        temp=gen();
        numbers.push_back(temp); // 生成随机整数并添加到向量中
        file << temp <<"  ";
    }
    file.close();
    // 对生成的随机数进行排序
    std::sort(numbers.begin(), numbers.end(),greater<int>());

    // 将排序后的结果写入文件
    std::ofstream outFile("sorted_random_numbers10w.txt");
    if (outFile.is_open()) {
        for (const auto& num : numbers) {
            outFile << num << "  ";
        }
        outFile.close();
        std::cout << "排序后的随机数已写入文件。" << std::endl;
    } else {
        std::cerr << "无法打开文件以写入。" << std::endl;
        return 1;
    }

    return 0;
}
