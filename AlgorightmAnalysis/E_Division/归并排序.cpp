//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
#include <vector>
using namespace std;
// 合并两个有序子数组
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; // 左子数组的大小
    int n2 = right - mid;    // 右子数组的大小

    // 创建临时数组
    vector<int> L(n1);
    vector<int> R(n2);

    // 复制数据到临时数组 L[] 和 R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // 合并临时数组到 arr[left..right]
    int i = 0; // 初始化第一个子数组的索引
    int j = 0; // 初始化第二个子数组的索引
    int k = left; // 初始化合并子数组的索引

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 复制 L[] 中剩余的元素
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // 复制 R[] 中剩余的元素
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// 归并排序函数
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        // 找到中间点
        int mid = (left + right) / 2;

        // 递归排序左右两半
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // 合并两个有序子数组
        merge(arr, left, mid, right);
    }
}

// 辅助函数：打印数组
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

// 主函数
int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    cout << "original array:\n";
    printArray(arr);

    mergeSort(arr, 0, arr.size() - 1);

    cout << "\nsorted array:\n";
    printArray(arr);
    return 0;
}



