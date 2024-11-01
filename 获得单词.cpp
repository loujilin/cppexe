//
// Created by 楼吉林 on 2024/10/10.
//
#include <iostream>
#include "string"
using namespace std;

int main()
{
    string a="!@#loujilin@#$    $%^is^&    my   name!";
    string b;

    //int pos=a.find("my");
    int pos=0,p1,p2;
    do{
        pos=a.find_first_not_of(" !()@#$%^&*.?,",pos);
        if(pos==string::npos)
            break;
        p1=pos;
        pos=a.find_first_of(" !()@#$%^&*.?,",pos);
        p2=pos;
        b=a.substr(p1,p2-p1);
        cout<<b<<endl;
        pos=p2;
    }while(1);
/*		if(pos==string::npos)
			break;
		cout<<pos<<endl;
		//pos++;
	}while(1);*/


    return 0;
}