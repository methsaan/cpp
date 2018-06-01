#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main() {
	cout << "M 2018\n";
	string nextCommand;
	string calcCommand;
	string op;
	double f;
	double s;
	double cm;
	double in;
	string type;
	while (true) {
		cout << "MHOME/shell/~$ ";
		cin >> nextCommand;
		if (nextCommand == "exit") {
			break;
		}
		else if (nextCommand == "calc") {
			while (true) {
				cout << "MHOME/shell/calc/~$ ";
				cin >> calcCommand;
				if (calcCommand == "quit") {
					break;
				}else if (calcCommand == "standard") {
					cout << "F: ";
					cin >> f;
					cout << "OP: ";
					cin >> op;
					cout << "S: ";
					cin >> s;
					if (op == "+") {
						cout << f+s << endl;
					}else if (op == "-") {
						cout << f-s << endl;
					}else if (op == "x") {
						cout << f*s << endl;
					}else if (op == "/") {
						cout << f/s << endl;
					}
				}else if (calcCommand == "unit"){
					cout << "T:  \b";
					cin >> type;
					if (type == "mtoc") {
						cout << "CM: ";
						cin >> cm;
						cout << cm * 2.54 << endl;
					}else if (type == "ctom"){
						cout << "IN: ";
						cin >> in;
						cout << in / 2.54 << endl;
					}
				}else {
					cout << calcCommand << ": Not a calculator command\n";
				}
			}
		}else if (nextCommand.substr(0,5) == "print") {
			cout << nextCommand.substr(6,nextCommand.length()) << endl;
		}
		else {
			cout << "Unexpected token at " << nextCommand << "\n";
		}
	}
	return 0;
}
