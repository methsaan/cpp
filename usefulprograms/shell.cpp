#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>

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
		cout << "home/~$ ";
		cin >> nextCommand;
		if (nextCommand == "exit") {
			break;
		}
		else if (nextCommand == "calc") {
			while (true) {
				cout << "home/calc/~$ ";
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
						cout << "CM: ";
						cin >> cm;
						cout << cm / 2.54 << "in" << endl;
					}else if (type == "ctom"){
						cout << "IN: ";
						cin >> in;
						cout << in * 2.54 << "cm" << endl;
					}
				}else if (calcCommand == "opt") {
					cout << "cap help len opt quit standard weight" << endl;
				}else if (calcCommand.substr(0,3) == "man") {
					string whatToHelpWith = calcCommand.substr(4, calcCommand.length());
					if ((whatToHelpWith == "len")||(whatToHelpWith == "weight")||(whatToHelpWith == "cap")) {
						cout << whatToHelpWith << "\nDESCRIPTION:\n\b";
						cout << "\tConvert metric capacity to customary or customary to metric.\n";
						cout << "COMMANDS: \n";
						cout << "\tmtoc: Metric to customary\n";
						cout << "\tctom: Customary to metric\n";
					}else if (calcCommand.substr(5,calcCommand.length()) == "opt") {
						cout << "OPT:\nDESCRIPTION\n";
						cout << "\tList all calc commands\n";
					}else {
						cout << "No manual entry for " << whatToHelpWith << endl;
					}
				}else if (calcCommand == "") {
					continue;
				}else {
					cout << "calc: " << calcCommand << ": Not a calculator command\n";
					cout << "           ^" << endl;
				}
			}
		}else if (nextCommand.substr(0,6) == "printw") {
			cout << nextCommand.substr(7,nextCommand.length()) << endl;
			if (nextCommand.find(" ")) {
				cout << "Invalid syntax: printw prints 1 word\n";
			}
		}else if (nextCommand.substr(0,4) == "help") {
			if (nextCommand.substr(5, nextCommand.length()) == "printw"){
				cout << "printw\n";
				cout << "DESCRIPTION:\n";
				cout << "\tprint out a word without spaces." << endl;
			}else if (nextCommand.substr(5,nextCommand.length()) == "exit"){
				cout << "exit\n";
				cout << "DESCRIPTION:" << endl;
				cout << "\tExits the shell\n";
			}else if (nextCommand.substr(5, nextCommand.length()) == "calc"){
				cout << "calc\n";
				cout << "DESCRIPTION:\n";
				cout << "\tCalculator shell";
			}else {
				cout << "No manual entry for " << nextCommand.substr(5,nextCommand.length()) << endl;
			}
		}else if (nextCommand == "opt") {
			cout << "calc printw help exit\n" << endl;
		}else if (nextCommand == "clear") {
			system("CLS");
		}
		else {
			cout << "home: " << nextCommand << ": no such command\n";
			cout << "      ^\n";
		}
	}
	return 0;
}
