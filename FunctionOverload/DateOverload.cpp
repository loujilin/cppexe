//
// Created by 15167 on 2024/12/10.
//
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Date
{
    int Year, Month, Day;
public:
    Date()
    {
        Year=2013; Month=10; Day=1;
    }
    Date(int d)
        Year=2013; Month=10; Day=1;
    }
    Date (int m, int d)
    {
        Year=2013; Month=m; Day=d;
    }
   Date(int y, int m, int d)
    {
        Year=y; Month=m; Day=d;
    }
    void ShowDate( )
    {
        cout<<setfill('0')<<setw(4)<<Year<<'-'<<setw(2)<<Month<<'-'<<setw(2)<<Day<<endl;
        cout<<setfill(' ');
    }
};

int main(int argc, char *argv[])
{

    vector<int> a;
    int b;
    Date t;
    while(cin>>b)
    {
        a.push_back(b);
    }
    b=a.size();
    switch(b)
    {
        case 0:t.set();break;
        case 1:t.set(a[0]);break;
        case 2:t.set(a[0],a[1]);break;
        case 3:t.set(a[0],a[1],a[2]);break;
    }
    t.ShowDate();
    return 0;
}