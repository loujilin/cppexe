//
// Created by 15167 on 2025/2/11.
//
#include<iostream>
#include<algorithm>//使用 next_permutation()和sort()需要导入的头文件
using namespace std;
int main(){
    int a[4]={2,1,4,3};

    sort(a,a+4);//对数组排序

    do{
        for(int i=0;i<4;i++){//打印排列
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }while(next_permutation(a,a+4));//获取下一个排列
    return 0;
}
