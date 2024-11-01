#include <iostream>
#include <string>
#include <sstream> 
using namespace std;
int main(int argc, char *argv[])
{
	double f=3.14159;
	
	stringstream ss;//��ss����cin����
	ss<<f;

	string s;
	ss>>s; 
	cout<<s<<"  ����:"<<s.length()<<endl;
	ss.str("");
	ss.clear();
	
	int d=1234;
	ss<<d;
	ss>>s;
	cout<<s<<endl; 
	
	return 0;
}