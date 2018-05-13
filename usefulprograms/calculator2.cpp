#include<iostream>
#include<cmath>
#include<string>

using namespace std;
void logic() {
	if (cin.fail()){
               cin.clear();
               cout << "Invalid number.\a\n";
	       exit(0);
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
	if (oper != "hypotenuse" && oper != "square_root" && oper != "cube_root") {
 		cout << "Invalid operator.\a\n";
		exit(0);
	}
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
	}void operror() {
		if (oper != "hypotenuse" && oper != "square_root" && oper != "cube_root") {
			cout << "Invalid operator.\n";
		}
	}
}
