//
// Created by 楼吉林 on 2024/11/19.
//
#include <iostream>
using namespace std;
class Advisor{
    int no;
};
class Student{
protected://用于继承的类，数据成员一般是protected
    string name;
    int xqhours;//学期总的学时
    double average;//平均分
public:
    Student(string pName="匿名"){
        name=pName;xqhours=0;average=0;
    }
    void addCourse(int hours,double grade){
        double totalGrade=xqhours*average+grade;
        xqhours=xqhours+hours;
        average=xqhours?totalGrade/xqhours:0;
    }
    void display(){
        cout<<"姓名："<<name<<endl;
        cout<<"学期总学时："<<xqhours<<endl;
        cout<<"平均分"<<average<<endl;
    }
    int getHours(){
        return xqhours;
    }
    double getAverage(){
        return average;
    }
    string getName(){
        return name;
    }
};

class GS:public Student{
    string mentor;
public:
    GS(string ds,string name):Student(name){
        mentor=ds;
    }
    void display(){
        //cout<<"自己的姓名:"<<getName()<<endl;
        Student::display();
        //cout<<"自己的姓名:"<<name<<endl;
        cout<<"导师的姓名："<<mentor<<endl;
    }
} ;
class Doctor:public GS{
protected:
    int working;//0:代表全日制，1：在职，
public:
    Doctor(string ds,string name,int w):GS(ds,name)
    {
        working=w;
    }
    void display(){//overlap,覆盖

        GS::display();
        if(working==0)
            cout<<"全日制"<<endl;
        else
            cout<<"在职"<<endl;
    }
};
int main(int argc, char *argv[])
{
    GS a("William","楼吉林");
    a.display();
    Doctor b("William","楼吉林",0);
    b.display();
    return 0;
}
