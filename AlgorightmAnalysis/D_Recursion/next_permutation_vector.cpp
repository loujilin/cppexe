//
// Created by 15167 on 2025/2/11.
//
#include<iostream>
#include<vector> //使用vector需要导入的头文件
#include<algorithm>//使用 next_permutation()和sort()需要导入的头文件
using namespace std;

int main(){
    vector<int> v;//定义一个int型的vector
    v.push_back(1);//在尾部插入数据1
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    do{
        for(int i=0;i<v.size();i++){//打印排列
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }while(next_permutation(v.begin(),v.end()));//获取下一个排列
}
