//
// Created by 楼吉林 on 2024/10/15.
//
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
vector<string> splitString(const string& str,char delimiter){
    vector<string> result;
    stringstream ss(str);
    string token;
    while(getline(ss,token,delimiter))
    {
        result.push_back(token);
    }
    return result;
}
vector<string> splitString2(const string& str,char delimiter){//处理空地址
    vector<string> result;
    int start=0,end=0;
    do{
        end=str.find(delimiter,start);
        if(end==string::npos)
            break;
        if(end==start){
            start=end+1;
            continue;
        }

        result.push_back(str.substr(start,end-start));
        start=end+1;
    }while(1);
    if(start<str.length())
        result.push_back(str.substr(start));
    return result;
}
string trim(string& s){
    int left,right;
    left=s.find_first_not_of(' ');
    s=s.substr(left);
    right=s.find_last_not_of(' ');
    s=s.substr(0,right+1);
    return s;

}
int main()
{
    string s="loujilin@gmail.com;;;;phoenixlou@gmail.com;15167181260@139.com";
    char delimiter=';';
    vector<string> t= splitString2(s, delimiter);
    for(vector<string>::iterator it=t.begin();it<t.end();it++)
    {
        if((*it).length()>0)
            cout<<*it<<endl;

    }
    string s1="    lou jilin    ";
    cout<<trim(s1)<<"end"<<endl;
    return 0;
}