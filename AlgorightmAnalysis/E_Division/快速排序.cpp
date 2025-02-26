#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
//typedef int DataType;
using namespace std;
typedef struct
{
    int  key;
}DataType;
void BubbleSort(DataType a[],int n)
{
    int i,j,flag=1;
    DataType temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
            if(a[j].key>a[j+1].key)
            {
                temp.key=a[j].key;
                a[j].key =a[j+1].key;
                a[j+1].key=temp.key;
            }
    }
}
int Division(int a[],int left,int right)
{
    int base =a[left];
    while(left<right)
    {
        while(left<right&&a[right]>base)
            --right;
        a[left]=a[right];
        while(left<right&&a[left]<base)
            ++left;
        a[right]=a[left];
    }
    a[left]=base;
    return left;
}
void QuickSort(int a[],int left,int right)
{
    int i;
    if(left<right)
    {
        i=Division(a,left,right);
        QuickSort(a,left,i-1);
        QuickSort(a,i+1,right);
    }
}
int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
void printArray(int a[],int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int i,n=348;
    double dif;
    time_t start,end;
    DataType t1[348];
    int t2[348];

    for(i=0;i<n;i++)
    {
        t1[i].key=rand();
        t2[i]=t1[i].key;
    }
    time(&start);
    //BubbleSort(t1,n);
    QuickSort(t2,0,n-1);
    printArray(t2,n);
    time(&end);
    dif=difftime(end,start);
    printf("bubble:%.2fs\n",dif);

/*    time(&start);
    //QuickSort(t1,0,n-1);
    qsort(t2,n,sizeof(int),compare);
    time(&end);
    dif=difftime(end,start);
    printf("quicksort:%.2fs\n",dif);*/
    return 0;
}
