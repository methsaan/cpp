#include <iostream>
#include <cmath>

// test
using namespace std;

int main()
{
	string oper;
	double f;
	double s;
	cout << "Welcome to the calculator. \n";
	cout << "Options: add, sub, mul, div, exp. \n";
	cout << "Enter operator: ";
	cin >> oper;
	cout << "Enter first number: ";
	cin >> f;
	cout << "Enter second number: ";
	cin >> s;
	if (oper == "add") {
		cout << "The answer is " << f + s << endl;
	}
	else if (oper == "sub") {
		cout << "The answer is " << f - s << endl;
	}
	else if (oper == "mul") {
		cout << "The answer is " << f * s << endl;
	}
	else if (oper == "div") {
		cout << "The answer is " << f / s << endl;
	}
	else if (oper == "exp") {
		cout << "The answer is " << pow(f, s)  << endl;
	}
	else {
		cout << "Invalid operator. \n";
	}
	return 0;
}
