//
// Created by 15167 on 2024/11/27.
//
#include <stdio.h>
#include <string.h>
void outstring(char* a,int start,int end){
    int i;
    for(i=start;i<end;i++)
        printf("%c",a[i]);
}
int main(int argc, char *argv[])
{
    char a[100];
    int n;
    int p1=0,p2,p3;
    gets(a);
    scanf("%d",&n);
    p3=strlen(a);
    p2=p3-n;
    outstring(a,p2,p3);
    outstring(a,0,p2);
	return 0;
}