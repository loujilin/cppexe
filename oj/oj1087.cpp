//
// Created by 15167 on 2024/11/27.
#include "string.h"
#include <stdio.h>
int pos(char* a,char* b,int start){
    int i,j;
    int flag=-1;
    for(i=start;a[i]!=0;i++){
        for(j=0;b[j]!=0&&a[i+j]!=0;j++)
        {
            if(a[i+j]!=b[j]||b[j]==0)
                break;
        }
        if(b[j]==0){
            flag=i;
            break;
        }
    }
    return flag;
}
void outstring(char* a,int start,int end){
    int i;
    for(i=start;i<end;i++)
        printf("%c",a[i]);
}
void printstr(char* a){
    int i;
    for(i=0;a[i]!=0;i++)
        printf("%c",a[i]);

}
void replaceall(char* a,char* b,char* c)
{
    int p1,p2,i;
    int blen;

    blen=strlen(b);
    for(i=0;;){
        p1=pos(a,b,i);
        if(p1>=0){
            outstring(a,i,p1);
            printstr(c);
            i=p1+blen;
        }
        else{
            outstring(a,i,strlen(a));
            break;
        }
    }
}
int main(int argc, char *argv[])
{
    char a[100],b[100],c[100];
    gets(a);gets(b);gets(c);
    replaceall(a,b,c);

    return 0;
}