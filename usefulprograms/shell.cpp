#include<iostream>
#include<string>
#include<algorithm>

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
				}else if (calcCommand == "len"){
					cout << "T: ";
					cin >> type;
					if (type == "mtoc") {
						cout << "IN: ";
						cin >> cm;
						cout << cm * 2.54 << "in" << endl;
					}else if (type == "ctom"){
						cout << "CM: ";
						cin >> in;
						cout << in / 2.54 << "cm" << endl;
					}
				}else if (calcCommand == "opt") {
					cout << "cap help len opt quit standard weight" << endl;
				}else if (calcCommand.substr(0,4) == "help") {
					string whatToHelpWith = calcCommand.substr(5, calcCommand.length());
					if ((whatToHelpWith == "len")||(whatToHelpWith == "weight")||(whatToHelpWith == "cap")) {
						cout << whatToHelpWith << "\nDESCRIPTION:\n\b";
						cout << "\tConvert metric capacity to customary or customary to metric.\n";
						cout << "COMMANDS: \n";
						cout << "\tmtoc: Metric to customary\n";
						cout << "\tctom: Customary to metric\n";
					}else if (calcCommand.substr(5,calcCommand.length()) == "opt") {
						cout << "OPT:\nDESCRIPTION\n";
						cout << "\tList all calc commands\n";
					}
				}else if (calcCommand == "") {
					continue;
				}else {
					cout << calcCommand << ": Not a calculator command\n";
				}
			}
		}else if (nextCommand.substr(0,6) == "printw") {
			cout << nextCommand.substr(7,nextCommand.length()) << endl;
			if (nextCommand.find("")) {
				cout << "Invalid Syntax: printw prints 1 word\n";
			}
			cout << nextCommand.substr(7,nextCommand.length()) << endl;
		}else if (nextCommand.substr(0,4) == "help") {
			if (nextCommand.substr(5, nextCommand.length()) == "fasf"){}
		}
		else {
			cout << "Unexpected token at " << nextCommand << "\n";
			cout << "                    ^\n";
		}
	}
	return 0;
}
