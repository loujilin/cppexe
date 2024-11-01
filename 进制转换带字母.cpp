//
// Created by 楼吉林 on 2024/10/23.
//
#include <iostream>

using namespace std;

int main()
{
    int n,p;//n´ú±íÊ®½øÖÆÊý£¬p´ú±í½øÖÆ
    char a[100];
    char cmap[37]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,j,t;
    scanf("%d%d",&n,&p);
    for(i=0;n>0;i++)
    {
        t=n%p;//È¡µÃÓàÊý
        a[i]=cmap[t];
        n=n/p;
    }
    for(j=i-1;j>=0;j--)
        printf("%c",a[j]);
    return 0;
}
