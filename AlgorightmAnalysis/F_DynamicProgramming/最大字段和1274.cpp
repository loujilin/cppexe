//
// Created by 15167 on 2025/2/25.
//
#include <stdio.h>
#include <math.h>
#include <string.h>
int _Max(int x,int y){return x>y?x:y;}
int number[200001],sum[200001];
int main(){
    int i,j;
    int n,maxx=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&number[i]);
    sum[1]=number[1];
    maxx=sum[1];
    for(i=2;i<=n;i++){
        sum[i]=_Max(sum[i-1]+number[i],number[i]);
        maxx=_Max(sum[i],maxx);
    }
    printf("%d",maxx);
}