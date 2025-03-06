//
// Created by 15167 on 2025/3/6.
//
#include <iostream>
using namespace std;
struct li     //记录每个场会的起始时间和结束时间
{
    int x;
    int y;
};
int cmp( const void *a , const void *b )
{
    struct li *c = (li *)a;
    struct li *d = (li *)b;
    return c->y - d->y;
}
int main()
{
    int n,t,count,i;
    li q[1001];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>q[i].x>>q[i].y;
        qsort(q,n,sizeof(q[0]),cmp);        //快排

//-----------------------------------------------
        count=1;
        t=q[0].y;
        for(i=1;i<n;i++)
        {
            if(q[i].x>=t)
            {
                count++;
                t=q[i].y;
            }
        }
//-------------------------------------------------
//贪心思路
        cout<<count<<endl;
    }
    return 0;
}