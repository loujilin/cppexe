//
// Created by 15167 on 2024/11/27.
//
#include <stdio.h>
int main(int argc, char *argv[])
{
    char a[100];
    int i,j,s=0;
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!=0;)
    {
       if(a[i]!=' ')
       {
           s++;
           for(;;i++)
           {
               if(a[i]==' '||a[i]==0)
                   break;
           }
       }
       else{
           i++;
           continue;
       }

    }
    printf("%d",s);
	return 0;
}