//
// Created by 15167 on 2025/3/6.
//
#include<iostream>
#include<string>
using namespace std;
#define max 100
typedef struct
{
    string data;  //结点值
    double weight;//权重
    int parent,lchild,rchild;
}HTnode;
HTnode ht[max];

typedef struct
{
    char cd[max];//存放当前结点的哈夫曼编码
    int start;//存放该结点哈夫曼编码的起始位置
}HCode;
HCode hcd[max];
/*
*n：n个叶子结点,共有2n-1个结点
*/
void createHTnode(HTnode ht[],int n)//构造哈夫曼树
{
    int i,k,lnode,rnode;
    double min1,min2;
    for(i=0;i<2*n-1;i++)
        ht[i].parent=ht[i].lchild=ht[i].rchild=-1;
    for(i=n;i<=2*n-2;i++)
    {
        min1=min2=32767;
        lnode=rnode=-1;
        for(k=0;k<=i-1;k++)//在ht[0...i-1]中找权值最小的两个结点
        {
            if(ht[k].parent==-1)
            {
                if(ht[k].weight<min1)
                {
                    min2=min1;
                    rnode=lnode;
                    min1=ht[k].weight;
                    lnode=k;
                }
                else if(ht[k].weight<min2)
                {
                    min2=ht[k].weight;
                    rnode=k;
                }
            }
        }
        ht[i].weight=ht[lnode].weight+ht[rnode].weight;
        ht[i].lchild=lnode;		ht[i].rchild=rnode;
        ht[lnode].parent=i;		ht[rnode].parent=i;
    }
}
void createHCode(HTnode ht[],HCode hcd[],int n0)//根据哈夫曼树求对应的哈夫曼编码
{
    int i,f,c;
    HCode hc;
    for(i=0;i<n0;i++)
    {
        hc.start=n0;
        c=i;
        f=ht[i].parent;
        while(f!=-1) //达到根结点
        {
            if(ht[f].lchild==c)
                hc.cd[hc.start--]='0'; //放在临时变量cd中
            else
                hc.cd[hc.start--]='1';
            c=f;
            f=ht[f].parent;
        }
        hc.start++;//start指向哈夫曼编码的最开始的字符
        hcd[i]=hc;
    }
}
void display(HTnode ht[],HCode hcd[],int n)
{
    int i,k;
    int sum=0,m=0,cnt;  //sum为wpl，m为总频率，cnt为当前路径长度
    //cout<<"哈夫曼编码为："<<endl;
    for(i=0;i<n;i++)
    {
        cnt=0;
        cout<<ht[i].data<<":";
        for (k=hcd[i].start; k<=n; k++)
        {
            cout<<hcd[i].cd[k];
            cnt++;
        }
        m+=ht[i].weight;
        sum+=(ht[i].weight*cnt);
        cout<<endl;
    }
    //cout<<"平均长度="<<(float)sum/m<<endl;
}
int main()
{
    int n=5;
    string str[]= {"a","b","c","d","e"};
    int f[]= {4,2,1,7,3};
    string a;
    int ff[26]={0};
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='#')
            break;
        ff[a[i]-'a']++;
    }
    n=0;
    for(int i=0;i<26;i++)
    {
        if(ff[i]>0)
        {
            ht[n].data=char(i+97);
            ht[n].weight=ff[i];
            n++;
        }

    }
/*    for (int i=0; i<n; i++)
    {
        ht[i].data=str[i];
        ht[i].weight=f[i];
    }*/
    createHTnode(ht,n);
    createHCode(ht,hcd,n);
    display(ht,hcd,n);
    return 0;

}