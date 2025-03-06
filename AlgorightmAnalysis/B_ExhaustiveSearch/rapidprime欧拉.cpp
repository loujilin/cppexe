//
// Created by 15167 on 2025/3/5.
//
#include<bits/stdc++.h>
using namespace std;

void aaa(int n,vector<int>& a)
{
    vector<bool> b(n + 1,true);
    b[0] = b[1] = false;
    for(int i = 2;i <= n;i ++)
    {
        if(b[i])
            a.push_back(i);

        for(int j = 0;j < a.size() && i * a[j] <= n;j ++)
        {
            b[i * a[j]] = false;
            if(i % a[j] == 0)
                break;
        }
    }
}

int main()

{
    int n;
    cin >> n;
    vector<int> a;
    aaa(n,a);
    cout << a.size() << endl;
    return 0;
}