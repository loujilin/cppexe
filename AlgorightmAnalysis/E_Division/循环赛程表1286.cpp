//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
#include <iomanip>
using namespace std;

const int N = 1e3 + 10;
int a[N][N];

void Merge(int n){
    int m = n / 2;
    for(int i = 0;i < m;i ++ ){
        for(int j = 0;j < m;j ++){
            a[i][j + m] = a[i][j] + m;//????????? = ????????? + m
            a[i + m][j] = a[i][j + m];//????????? = ?????????
            a[i + m][j + m] = a[i][j]; //????????? = ?????????
        }
    }
}

void Solve(int n){
    if(n == 1) {
        a[0][0] = 1;
        return;
    }
    Solve(n / 2);
    Merge(n);
}

int main(){
    int n;
    cin >> n;
    Solve(n);
    for(int i = 0;i < n;i ++ ){
        for(int j = 0;j < n;j ++ ){
            cout <<setw(5)<<a[i][j] ;
        }
        cout<<endl;
        //puts("");
    }
    return 0;
}