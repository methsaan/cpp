#include<iostream>
#include<cmath>
#include<string>
#include<ctime>

using namespace std;
double f;
double s;
string oper;
bool running;
bool error(string x) {
	running = true;
	if ((x != "hypotenuse") && (x != "square_root") && (x != "cube_root") && (x != "quit")) {
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
		cout << "Options: hypotenuse, square_root, cube_root, quit\n";
		cout << "Enter operator: ";
		string oper;
		cin >> oper;
		bool not_errored = error(oper);
		if ((not_errored == false) && (oper != "quit")) {
			break;
		}
		if (oper == "quit") {
                	cout << "quitting ..." << endl;
                	break;
                }

		cout << "Enter first number: ";
		cin >> f;
		if (cin.fail()) {
			cin.clear();
			cout << "Invalid operator.\n";
			break;
		}
		cout << "Enter second number (if needed): ";
		cin >> s;
		if (cin.fail()) {
			if (oper == "hypotenuse") {
				cin.clear();
				cout << "Invalid operator. \n";
				break;
			}else {
				cin.ignore(10, '\n');
				cin.get();
			}
		}
		if (oper == "hypotenuse") {
			double fsqr = f * f;
			double ssqr = s * s;
			double sqrsum = fsqr + fsqr;
			squart = pow(sqrsum, 0.5);
			cout << squart << endl;
		}else if (oper == "square_root") {
			squart = pow(f, 0.5);
			cout << squart << endl;
		}else if (oper == "cube_root") {
			squart = pow(f, 0.3333333333333333333333333333333333333333333333333333332);
			cout << squart << endl;
		}
	}
	return 0;
}
