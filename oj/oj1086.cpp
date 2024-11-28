//
// Created by 15167 on 2024/11/27.
//
#include <stdio.h>
int main(int argc, char *argv[])
{
    char a[100],b[100];
    int i,j;
    int flag=-1;
    //fgets(a,sizeof(a),stdin);
    //fgets(b,sizeof(b),stdin);
    gets(a);gets(b);
    for(i=0;a[i]!=0;i++){
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
    printf("%d",flag);
	return 0;
}