//
// Created by 楼吉林 on 2024/11/6.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void* p1,const void* p2){
    return *((int*)p2)-*((int*)p1);
}
typedef struct {
    char name[20];
    int age;
}stu;
int cmp_struct(const void* p1,const void* p2){
    int k=strcmp(((stu*)p1)->name,((stu*)p2)->name);
    if(k!=0)
        return k;
    else
        return ((stu*)p2)->age-((stu*)p1)->age;
}
int main(int argc,char *argv[])
{
    int a[]={43,5,6,78,56,78,1};
    int i;

    stu s[]={
            {"lou jilin",18},
            {"lou xiaoxiao",15},
            {"zyf",46},
            {"lou jilin",47}
    };
    qsort(s,sizeof(s)/sizeof(s[0]),sizeof(stu),cmp_struct);
    for(i=0;i<sizeof(s)/sizeof(s[0]);i++)
    {
        printf("%s:%5d\n",s[i].name,s[i].age);
    }
 /*   qsort(a,sizeof(a)/sizeof(a[0]),sizeof(int),cmp);
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
        printf("%5d",a[i]);

    */
    return 0;
}


