#include <iostream>
#include <string>
#include <sstream> 
using namespace std;
int main(int argc, char *argv[])
{
	string s;
	//????stringsteram
	cin>>s;
	stringstream ss(s);//??ss????cin????
	//int d;
	double d;
	ss>>d; //cin>>d; 

	//d=s;
	cout<<d<<endl;
	return 0;
}