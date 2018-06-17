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
		cout << "home/~$ " << flush;
		cin >> nextCommand;
		if (nextCommand == "exit") {
			break;
		}
		else if (nextCommand == "calc") {
			while (true) {
				cout << "home/calc/~$ " << flush;
				cin >> calcCommand;
				if (calcCommand == "quit") {
					break;
				}else if (calcCommand == "standard") {
					cout << "F: " << flush;
					cin >> f;
					cout << "OP: " << flush;
					cin >> op;
					cout << "S: " << flush;
					cin >> s;
					if (op == "+") {
						cout << f+s << flush << endl;
					}else if (op == "-") {
						cout << f-s << flush << endl;
					}else if (op == "x") {
						cout << f*s << flush << endl;
					}else if (op == "/") {
						cout << f/s << flush << endl;
					}
				}else if (calcCommand == "len"){
					cout << "T: " << flush;
					cin >> type;
					if (type == "mtoc") {
						cout << "CM: " << flush;
						cin >> cm;
						cout << cm / 2.54 << "in" << flush << endl;
					}else if (type == "ctom"){
						cout << "IN: ";
						cin >> in;
						cout << in * 2.54 << "cm" << flush << endl;
					}
				}else if (calcCommand == "opt") {
					cout << "cap help len opt quit standard weight" << endl << flush;
				}else if (calcCommand.substr(0,3) == "man") {
					string whatToHelpWith = calcCommand.substr(4, calcCommand.length());
					if ((whatToHelpWith == "len")||(whatToHelpWith == "weight")||(whatToHelpWith == "cap")) {
						cout << whatToHelpWith << "\nDESCRIPTION:\n\b" << flush;
						cout << "\tConvert metric capacity to customary or customary to metric.\n" << flush;
						cout << "COMMANDS: \n" << flush;
						cout << "\tmtoc: Metric to customary\n" << flush;
						cout << "\tctom: Customary to metric\n" << flush;
					}else if (calcCommand.substr(5,calcCommand.length()) == "opt") {
						cout << "OPT:\nDESCRIPTION\n" << flush;
						cout << "\tList all calc commands\n" << flush;
					}else if (whatToHelpWith == "quit"){
						cout << "quit\n" << flush;
						cout << "DESCRIPTION:\n" << flush;
						cout << "\tQuit calc" << flush;
					}else {
						cout << "No manual entry for " << whatToHelpWith << endl << flush;
					}
				}else if (calcCommand == "") {
					cin.ignore();
					cin.clear();
					continue;
				}else {
					cout << "calc: " << calcCommand << ": Not a calculator command\n";
					cout << "      ^" << endl << flush;
				}
			}
		}else if (nextCommand.substr(0,6) == "printw") {
			cout << nextCommand.substr(7,nextCommand.length()) << endl;
			if (nextCommand.find(" ")) {
				cout << "Invalid syntax: printw prints 1 word\n" << flush;
			}
		}else if (nextCommand.substr(0,4) == "help") {
			if (nextCommand == "help"){
				cout << "help: missing 1 argument\n" << flush;
			}
			if (nextCommand.substr(5, nextCommand.length()) == "printw"){
				cout << "printw\n" << flush;
				cout << "DESCRIPTION:\n" << flush;
				cout << "\tprint out a word without spaces." << endl << flush;
			}else if (nextCommand.substr(5,nextCommand.length()) == "exit"){
				cout << "exit\n";
				cout << "DESCRIPTION:\n" << endl << flush;
				cout << "\tExits the shell\n";
			}else if (nextCommand.substr(5, nextCommand.length()) == "calc"){
				cout << "calc\n" << flush;
				cout << "DESCRIPTION:\n" << flush;
				cout << "\tCalculator shell\n" << flush;
			}else if (nextCommand.substr(5, nextCommand.length()) == "opt"){
				cout << "opt\n" << flush;
				cout << "DESCRIPTION:\n" << flush;
				cout << "\tLists home options" << flush;
			}else {
				cout << "No manual entry for " << nextCommand.substr(5,nextCommand.length()) << endl << flush;
			}
		}else if (nextCommand == "opt") {
			cout << "calc printw help exit\n" << endl << flush;
		}else if (nextCommand == "clear") {
			system("clear");
		}
		else {
			cout << "home: " << nextCommand << ": no such command\n" << flush;
			cout << "      ^\n" << flush;
		}
	}
	return 0;
}
