#include <iostream>
using namespace std;
class Point{
private:
	double x;
	double y;
public:
	Point(double x=0,double y=0){
		this->x=x;this->y=y;
	}
	Point operator+(const Point& b){
		Point t;
		t.x=x+b.x;t.y=y+b.y;
		return t;//this相当于a吧
	}
	Point operator+(const int& x1){
		Point t;
		t.x=x+x1;
		t.y=y;
		return t;
	}
	Point operator-(const Point& b){
		Point t;
		t.x=x-b.x;t.y=y-b.y;
		return t;//this相当于a吧
	}
	bool operator==(const Point& b){
		if(x==b.x&&y==b.y)
			return true;
		else
			return false;
	}
	
	bool operator!=(const Point& b){
		if(x==b.x&&y==b.y)
			return false;
		else
			return true;
	}
	Point operator=(const Point& b){
		Point t;
		t.x=b.x;t.y=b.y;
		return t;//this相当于a吧 
	}

/*	Point operator+(const Point& b){
		x=x+b.x;y=y+b.y;
		return *this;//this相当于a吧 
	}
friend Point operator+(const Point& a,const Point& b){
		Point t;
		t.x=a.x+b.x;
		t.y=a.y+b.y;
		return t;//this相当于a吧 
	}*/	
	void print(){
		cout<<"("<<x<<","<<y<<")"<<endl; 
	}
	friend ostream& operator<<(ostream& o,const Point& t){
			o<<"("<<t.x<<","<<t.y<<")"<<endl; 
			return o;
		} 

	
};
int main(int argc, char *argv[])
{
	Point a(1,2),b(3,4);
	Point c;
	//c=a+b; a+b;
	(a+b).print();
	c=a+b;
	c.print();
	Point t=a+10;
	t.print();
	a.print();
	cout<<t;
	return 0;
}
