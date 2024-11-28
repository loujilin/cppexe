//
// Created by 楼吉林 on 2024/9/27.
//
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;
class Date{
protected:
    int year;
    int month;
    int day;
public:

    Date(int d=1,int m=1,int y=1900,int h=0,int i=0,int s=0)
    {
        year=y;month=m;day=d;
    }
    Date(string s){

        stringstream ss(s),ss1;
        string a;
        int i,k[3];
        for(i=0;getline(ss,a,'-');i++){
            ss1<<a;//先放入流
            ss1>>k[i];
            ss1.str("");
            ss1.clear();
        }
        year=k[0];month=k[1];day=k[2];
    }
    friend bool operator<(const Date&a,const Date& b){
        bool flag=false;
        if(a.year<b.year)
            flag=true;
        else if(a.year==b.year&&a.month<b.month)
            flag=true;
        else if(a.year==b.year&&a.month==b.month&&a.day<b.day)
            flag=true;
        else
            flag=false;//>=

        return flag;

    }
    int operator-(const Date& b){
        Date t(*this);//用当前对象复制了一个副本，避免修改自身的值
        int i;
        for(i=0;t<b;i++)
            t.addone2();
        return i;//不完整的代码，自己填写完整

    }
    friend ostream& operator<<(ostream& o,const Date& b){
        o<<setfill('0');
        o<<setw(4)<<b.year<<'-'<<setw(2)<<b.month<<'-'<<setw(2)<<b.day<<endl;
        o<<setfill(' ');
        return o;
    }
/*    ostream& operator<<(ostream& o){
        o<<setfill('0');
        o<<setw(4)<<this->year<<'-'<<setw(2)<<this->month<<'-'<<setw(2)<<this->day<<endl;
        o<<setfill(' ');
        return o;
    }*/
    //i++
/*    friend Date& operator++( Date& a){//++a

        a.addone2();
        return a;
    }
    friend Date operator++(Date& a,int){//a++
        Date t;
        t.year=a.year;t.month=a.month;t.day=a.day;
        a.addone2();
        return t;
    }*/
    Date& operator++(){//++a

        this->addone2();
        return (*this);
    }
    Date operator++(int){//a++
        Date t;
        t.year=this->year;t.month=this->month;t.day=this->day;
        this->addone2();
        return t;
    }
    bool IsLeap()
    {
        bool flag=false;
        if(year%4==0&&year%100!=0||year%400==0)
            flag=true;
        return flag ;
    }
/*    void addsecond(int n)
    {
        int s;
        s=t.add(n);
        add(s);
    }*/
    void addone2()
    {
        int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        day+=1;
        if(IsLeap())
        {
            m[2]=29;
        }
        if(day>m[month])
        {
            month++;
            day=1;
            if(month>12)
            {
                month=1;
                year++;
            }

        }
    }
    void add(int n)
    {
        int i;
        for(i=0;i<n;i++)
            addone2();
    }
    int getDaysInMonth(int y,int m){
        int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if(y%4==0&&y%100!=0||y%400==0)
            a[2] = 29;
        return a[m];
    }
    void add2(int n){
        while(n>0){
            int days=getDaysInMonth(year,month);
            if(day+n<=days){
                day=day+n;
                n=0;
            }
            else{
                n=n-(days-day+1);
                day=1;
                if(month==12)
                {
                    month=1;
                    year++;
                }
                else
                {
                    month++;
                }
            }
        }
    }
    void print()
    {
        cout<<setfill('0');
        cout<<setw(4)<<year<<'-'<<setw(2)<<month<<'-'<<setw(2)<<day<<endl;
        cout<<setfill(' ');
    }

};
class WDate:public Date{
public:
    WDate(int d, int m, int y, int h, int i, int s) : Date(d, m, y, h, i, s) {}

    WDate(const string &s) : Date(s) {}

public:
    int weekday()
    {
        int  a,t;
        if (month == 1 || month == 2) { month += 12; year--; }
        // 判断是否在1752年9月3日之前
        if ((year < 1752) || (year == 1752 && month < 9) ||(year == 1752 && month == 9 && day < 3))
            a = (day + 2*month + 3*(month+1)/5 + year + year/4 +5) % 7;
        else
        {
            a = (day + 2*month + 3*(month+1)/5 + year + year/4 - year/100 + year/400)%7;
            t=day + 2*month + 3*(month+1)/5 + year + year/4 - year/100 + year/400;
            //printf("%day",t);
        }
        return a;
    }
};
int main()
{
    WDate a("2024-11-28");
    cout<<a;
    return 0;
}