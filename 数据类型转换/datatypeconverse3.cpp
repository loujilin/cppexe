#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	string s;
	getline(cin,s);
	stringstream ss;
	ss<<s;
	int d;
	double f;
	ss>>d>>f;//cin>>d>>f;	
	cout<<d<<"  "<<f<<endl;
	return 0;
}