//
// Created by 15167 on 2025/2/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string add(string&, string&);
int main(int argc, char *argv[])
{
    string s="0",a;
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        s=add(s,a);
    }
    cout<<s.substr(s.find_first_not_of('0'))<<endl;
    return 0;
}
string add(string& s1, string& s2)
{
    string s3;
    int i,m,n,t;
    int k=0;//k present the plus flag after each result of s1 plus s2
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    //?????
    if(s1.size()>s2.size())
    {m=s2.size();n=s1.size();}
    else
    {m=s1.size();n=s2.size();}
    s3.resize(n+1,'0');
    for(i=0;i<m;i++)
    {
        t=s1[i]+s2[i]-96;
        if(t>9)
        {
            s3[i]=t%10+k+48;
            k=1;
        }
        else
        {
            s3[i]=t+k+48;
            k=0;
        }
    }
    if(s1.size()>m)
        for(;i<s1.size();i++)
        {
            t=s1[i]+k-48;
            if(t==10)
            {
                s3[i]='0';
                k=1;
            }
            else
            {
                s3[i]=t+'0';
                k=0;
            }
        }
    else
        for(;i<s2.size();i++)
        {
            t=s2[i]+k-48;
            if(t==10)
            {
                s3[i]='0';
                k=1;
            }
            else
            {
                s3[i]=t+'0';
                k=0;
            }
        }


    reverse(s3.begin(),s3.end());
    return s3;
}