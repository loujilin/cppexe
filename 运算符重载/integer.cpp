#include <iostream>
#include <cmath> 
using namespace std;
class Integer{
private:
	int a;
public:
	Integer(int a){
		this->a=a;
	}
	int operator^(int n){
		long s=1;
		for(int i=0;i<n;i++) 
			s=s*a;
		return s;
	}
};
int main(int argc, char *argv[])
{
	Integer x(5);
	long t=x^3;
	cout<<(x^3);
	return 0;
}

