//
// Created by 15167 on 2024/11/27.
//
#include <stdio.h>
#include <string.h>
int equal(char* a,char* b){
    int i;
    int flag=1;
    for(i=0;a[i]!=0&&b[i]!=0;i++){
        if(a[i]!=b[i])
            flag=0;
    }
    return flag;
}
int main(int argc, char *argv[])
{    char a[100],b[100];
    int i,j;
    gets(a);
    for(j=strlen(a)-1,i=0;a[i]!=0;j--,i++){
        b[j]=a[i];
    }
    if(equal(a,b))
        printf("yes");
    else
        printf("no");

	return 0;
}