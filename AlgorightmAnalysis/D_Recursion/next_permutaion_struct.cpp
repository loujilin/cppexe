//
// Created by 15167 on 2025/2/11.
//
#include<iostream>
#include<algorithm>//使用 next_permutation()和sort()需要导入的头文件
using namespace std;

struct test{//结构体test
    int val;
};

bool cmp(test t1,test t2){//自定义的排列
    return t1.val<t2.val;
}

int main(){
    test t[4];//结构体数组
    t[0].val=1;
    t[1].val=2;
    t[2].val=3;
    t[3].val=4;

    do{
        for(int i=0;i<4;i++){//打印排列
            cout<<t[i].val<<' ';
        }
        cout<<endl;
    }while(next_permutation(t,t+4,cmp));//获取下一个排列
}
