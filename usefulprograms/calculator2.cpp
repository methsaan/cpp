#include<iostream>
#include<cmath>
#include<string>

using namespace std;
bool logic() {
	bool running = true;
	if (cin.fail()){
                cin.clear();
        	cout << "Invalid number.\a\n";
		running = false;
	}
	return running;
}
bool operror(string x) {
	bool running = true;
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
		bool numfalse1 = logic();
		if (numfalse1 == false){
			break;
		}
		cout << "Enter second number (if needed): ";
		cin >> s;
		bool numfalse2 = logic();
		if (numfalse2 == false) {
			break;
		}
		if (oper == "Hypotenuse") {
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
