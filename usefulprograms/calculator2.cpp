#include<iostream>
#include<cmath>
#include<string>
#include<fstream>

using namespace std;
void logic() {
	if (cin.fail()){
               cin.clear();
               cout << "Invalid number.\a\n";
	       throw exception();
	}
}
void operror(string x) {
	if (x != "hypotenuse") && (x != "square_root") && (x != "cube_root") {
		cout << "Invalid operator.\n";
	}
}
int main()
{
	double f;
	double s;
	double squart;
	cout << "################################################\n";
	cout << "########### Welcome to calculator 2 ############\n";
	cout << "################################################\n";
	cout << "Options: hypotenuse, square_root, cube_root\n";
	cout << "Enter operator: ";
	string oper;
	cin >> oper;
	operror(oper);
	cout << "Enter first number: ";
	cin >> f;
	logic();
	cout << "Enter second number: ";
	cin >> s;
	logic();
	if (oper == "Hypotenuse") {
		squart = pow((f * f) + (s * s), 0.5);
		cout << "Hypo" << endl;
	}else if (oper == "square_root") {
		squart = pow(f, 0.5);
		cout << squart << endl;
	}else if (oper == "cube_root") {
		double third = 1 / 3;
		squart = pow(f, third);
		cout << squart << endl;
	}
}
