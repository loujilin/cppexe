#include <iostream>
#include <iomanip> 
#include <sstream>
using namespace std;
class Time{
	int hour;
	int minute;
	int second;	
public:
	Time(int h,int m,int s)
	{
		hour=h;minute=m;second=s;
	}

	int add(int n)//如果超过1天， 就返回具体的天数 
	{
		int t,t1;
		t=second+60*minute+3600*hour;
		t1=t;
		t=t+n;
		t=t%86400;
		hour=t/3600;
		t=t-3600*hour;
		minute=t/60;
		second=t-60*minute;
		return t1/86400;
	}
	void addone()
	{
		second++;
		if(second>=60)
		{
			second=0;minute++;
			if(minute>=60)
				{
					minute=0;hour++;
					if(hour>=24)
						hour=hour%24;
				}	
		}
	}
	void print()
	{
		cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
	}
};
class Date{
private:
	int year;
	int month;
	int day;
	Time t;
public:

	Date(int d=1,int m=1,int y=1900,int h=0,int i=0,int s=0):t(h,i,s)
	{
		year=y;month=m;day=d;
	}
	Date(string s):t(0,0,0){
		
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
	void addsecond(int n)
	{
		int s;
		s=t.add(n);
		add(s);
	}
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
/*	void addone()
	{
		day+=1;
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:break;
			case 4:
			case 6:
			case 9:
			case 11:break;
			case 2:  if(IsLeap())
						//29
					else
						//28 
			case 12:
		}
		
	}*/
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
int main(int argc, char *argv[])
{
    Date a(27,10,2022,23,59,59);//实例化 ，才能分配空间
    cout<<++a;
    cout<<a++;
    cout<<a;

/*	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	Date a(s1),b(s2);
	//cout<<a-b;
	Date a(27,10,2022,23,59,59);//实例化 ，才能分配空间
	//Date b("2018-10-12"); 
	a.addsecond(10);
	a.print();
	//a.set(10,8);
	//a.set("2018-10-12");
	a.addone2();
	a.print();
	//(a+1).print(); 
	//a.print();
	Date *p;
	p=new Date;//new相当于malloc 
	p->set(10,8);
	p->print();
	delete p;*/
	return 0;
}
