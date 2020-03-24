#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	double side1;
	double side2;
	double hypotenuse;
	string angle0opposite;
	string function;
	double functionAns;
	double angle;
	cout << "Enter side 1: ";
	cin >> side1;
	cout << "Enter side 2: ";
	cin >> side2;
	hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
	cout << "Enter opposite side of angle 0: ";
	cin >> angle0opposite;
	cout << "Enter function: ";
	cin >> function;
	if (function == "sin") {
		if (angle0opposite == "side1") {
			functionAns = side1/hypotenuse;
		}else {
			functionAns = side2/hypotenuse;
		}
		angle = asin(functionAns)*(180/M_PI);
	}else if (function == "cos") {
		if (angle0opposite == "side1") {
			functionAns = side2/hypotenuse;
		}else {
			functionAns = side1/hypotenuse;
		}
	}else if (function == "tan") {
		if (angle0opposite == "side1") {
			functionAns = side1/side2;
		}else {
			functionAns = side2/side1;
		}
	}
	if (function == "sin") {
		cout << "Angle 0: " << angle << "°" << endl;
	}
	cout << function << "(0) = " << functionAns << endl;
}
