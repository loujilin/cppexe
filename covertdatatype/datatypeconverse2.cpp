#include <iostream>
#include <string>
#include <sstream> 
using namespace std;
int main(int argc, char *argv[])
{
	double f=3.14159;
	
	stringstream ss;//�1�7�1�7ss�1�7�1�7�1�7�1�7cin�1�7�1�7�1�7�1�7
	ss<<f;

	string s;
	ss>>s; 
	cout<<s<<"  �1�7�1�7�1�7�1�7:"<<s.length()<<endl;
	ss.str("");
	ss.clear();
	
	int d=1234;
	ss<<d;
	ss>>s;
	cout<<s<<endl; 
	
	return 0;
}