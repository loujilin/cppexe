//
// Created by 楼吉林 on 2024/10/10.
//
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    string a="Strings;    are :objects.";
    int pos1,pos2,len;
    string t="";

    pos1=0;
    do{
        pos2=a.find_first_of(".;: ",pos1);
        len=pos2-pos1;
        t=a.substr(pos1,len)+" "+t;
        pos1=a.find_first_not_of(".;: ",pos2);
        if(pos1<0)
            break;
    }while(1);
    t[t.size()-1]=a[a.size()-1];
    cout<<t;


    return 0;
}