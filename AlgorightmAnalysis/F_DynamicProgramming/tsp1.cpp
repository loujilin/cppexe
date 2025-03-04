//
// Created by 15167 on 2025/3/4.
//
#include<iostream>
#include <string.h>
using namespace std;
#define INF 999999999
int con[65536][20];
int bit[20];
int n;
int g[20][20];
int  init()
{
    int i;
    int j;
    int t;
    if(scanf("%d",&n)==EOF)
        return -1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>g[i][j];
        }
    }
    memset(con,-1,sizeof(con));
    for(i=0;i<n;i++){
        bit[i]=1<<i;
    }
    t=1;
    for(i=1;i<n;i++){
        con[t<<(i-1)][i]=g[0][i];
    }
    return 1;
}
int getcon(int s,int k){
    int t,tt;
    int i;
    int min=INF;
    if(con[s][k]!=-1)
        return con[s][k];
    t=s&(~bit[k-1]);
    for(i=1;i<n;i++){
        tt=t&bit[i-1];
        if(tt>0){
            if(getcon(t,i)+g[i][k]<min){
                min=getcon(t,i)+g[i][k];
            }
        }
    }
    con[s][k]=min;
    return con[s][k];
}
int main(){
    int i;
    int t;
    int ret;
    while(init()>0){
        t=0;
        ret=INF;
        for(i=1;i<n;i++){
            t=t<<1;
            t=t|1;
        }
        for(i=1;i<n;i++){
            if(getcon(t,i)+g[i][0]<ret){
                ret=getcon(t,i)+g[i][0];
            }
        }
        if(n==1)
            ret=0;
        cout<<ret<<endl;
    }
}