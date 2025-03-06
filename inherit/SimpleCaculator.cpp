//
// Created by 15167 on 2024/12/10.
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void Swap(int& a,int &b){
    int t;
    t=a;a=b;b=t;
}
int a[100];
class Calculator {
public:
    virtual int add(int a, int b) = 0;
    virtual int subtract(int a, int b) = 0;
    virtual int multiply(int a, int b) = 0;
    virtual double divide(int a, int b) = 0;
    virtual ~Calculator() {}
};

class SimpleCalculator : public Calculator {
public:

    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b)  {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b == 0) return -1.0;
        return 1.0*a / b;
    }
};

int main() {
    SimpleCalculator calculator;
    string operation;
    int a, b;

    for (int i = 0; i < 5; ++i) {
        cin >> a >> operation >> b;
        if (operation == "+") {
            cout << calculator.add(a, b) << endl;
        } else if (operation == "-") {
            cout << calculator.subtract(a, b) << endl;
        } else if (operation == "*") {
            cout << calculator.multiply(a, b) << endl;
        } else if (operation == "/") {
            cout << fixed << setprecision(1) << calculator.divide(a, b) << endl;
        }
    }

    return 0;
}