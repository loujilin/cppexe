//
// Created by 15167 on 2025/2/11.
//
#include <stdio.h>
int mark[256];
int n;
void DFS(int sum, int k, int prio) {
    if(sum > n) {
        return;
    } else if(sum == n) {
        int i;

        for( i = 0; i < k-1; i++) {
            printf("%5d",mark[i]);
        }
        printf("%5d\n",mark[i]);
    } else {
        for(int j = 1; j <= prio; j++) {
            mark[k] = j;
            sum += j;
            DFS(sum,k+1,j);
            sum -= j;  //????????????
        }
    }
}
int main() {
    scanf("%d", &n);
    DFS(0, 0, n);
    return 0;
}