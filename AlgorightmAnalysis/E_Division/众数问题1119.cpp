//
// Created by 15167 on 2025/2/25.
//
# include<stdio.h>
# include<string.h>

int b[100001];

int main(void)
{
    long a[101];
    long p,end;
    int i,t,n,max;
    max = end = 0;
    memset(b,0,sizeof(b));
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        b[a[i]]++;
        if(a[i]>end)
            end = a[i];
    }
    for(i=0;i<=end;i++)
        if(b[i]>max)
        {
            max = b[i];
            p = i;
        }
    printf("%ld %d\n",p,max);
    return 0;
}