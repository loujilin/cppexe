//
// Created by 15167 on 2025/2/11.
//
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<string> getGray(int n)
{
    vector<string>v;
    for(int i=0; i<n; i++)
    {
        if(v.size()==0)v.push_back("0"),v.push_back("1");
        else
        {
            for(int j=v.size()-1; j>=0; j--)
            {
                v.push_back('1'+v[j]);
                v[j]='0'+v[j];
            }
        }
    }
    return v;
}

vector<string> getGray2(int n)
{
    vector<string>v(pow(2,n));
    if(n==1)
    {
        v[0]='0';
        v[1]='1';
        return v;
    }
    vector<string>prev=getGray2(n-1);
    for(int i=0; i<prev.size(); i++)
    {
        v[i]='0'+prev[i];
        v[prev.size()*2-1-i]='1'+prev[i];
    }
    return v;
}

int main(int argc, char *argv[])
{
    vector<string> b;
    string x;
    int n;
    cin>>n;
    b=getGray2(n);
    for(vector<string>::iterator it=b.begin();it!=b.end();++it)
    {
        cout<<*it<<endl;
    }
    return 0;
}