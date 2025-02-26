//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
using namespace std;
int BiSearch(int a[],int left,int right,int x)
{//a数组升序
    int m;
    if(left>right)
        return -1;
    m=(left+right)/2;
    if(a[m]==x)
        return m;
    if(x<a[m])//左边
        return BiSearch(a,left,m-1,x);
    else//右边
        return BiSearch(a,m+1,right,x);

}
int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int main(int argc, char *argv[])
{
    int a[]={4,3,5,6,23,4,6,8,9};
    qsort(a,8,sizeof(int),compare);
    cout<<BiSearch(a,0,7,4);
    return 0;
}