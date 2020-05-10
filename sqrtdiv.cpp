#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv){
	double num1;
	double num2;
	double sqrt1;
	double sqrt2;
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
	sqrt1 = sqrt(num1);
	sqrt2 = sqrt(num2);
	cout << "    ______" << endl;
	cout << "   / " << num1 << endl;
	cout << "  / ____  = " << sqrt(num1/num2) << endl;
	cout << "\\/   " << num2 << endl;
	cout << endl << endl << endl << endl;
	cout << "   ______" << endl;
	cout << "  / " << endl;
	cout << "\\/  " << num1 << endl;
	cout << "___________\n";
	cout << "   ______" << "   = " << sqrt(num1)/sqrt(num2) << endl;
	cout << "  / " << endl;
	cout << "\\/  " << num2 << endl;
}
