#include<iostream>
#include<cmath>
#include<string>

using namespace std;
double f;
double s;
string oper;
bool running;
bool operror(string x) {
	if ((x != "hypotenuse") && (x != "square_root") && (x != "cube_root")) {
		cout << "Invalid operator.\n";
		running = false;
	}
	return running;
}
int main()
{
	bool running = true;
	while (running == true){
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
		bool opbreak = operror(oper);
		if (opbreak == false){
			break;
		}
		cout << "Enter first number: ";
		cin >> f;
		cout << "Enter second number (if needed): ";
		cin >> s;
		if (oper == "hypotenuse") {
			double fsqr = f * f;
			double ssqr = s * s;
			double sqrsum = fsqr + fsqr;
			squart = pow(sqrsum, 0.5);
			cout << squart << endl;
		}else if (oper == "square_root") {
			if (!(cin>>s)) {
				cin.ignore(10, "\n");
			}
			squart = pow(f, 0.5);
			cout << squart << endl;
		}else if (oper == "cube_root") {
			if (!(cin>>s)) {
				cin.ignore(10, "\n");
			}
			squart = pow(f, 0.3333333333333333333333333333333333333333333333333333332);
			cout << squart << endl;
		}
	}
	return 0;
}
