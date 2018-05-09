#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	double f;
	double s;
	double squart;
	cout << "################################################\n";
	cout << "##### Welcome to the hypotenuse calculator #####\n";
	cout << "################################################\n";
	cout << "Enter first number: ";
	cin >> f;
	cout << "Enter second number: ";
	cin >> s;
	squart = pow((f * f) + (s * s), 0.5);
	cout << squart << endl;
}
