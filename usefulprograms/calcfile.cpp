#include <iostream>
#include <cmath>
#include <cstring>
#include "calculatorsci.cpp"

using namespace std;

string duplicateStr(string str, int num) {
	string newStr = str;
	for (int x = 0; x < num-1; x++) {
		newStr += str;
	}
	return newStr;
}
int main(int argc, char *argv[]) {
	calculator c;
	c.setAns(1000-c.factorial(5));
	double answer = ;
	int len = std::to_string(answer).size();
	cout << "_____________________________________________________" << endl;
	cout << "| _________________________________________________ |" << endl;
	cout << "| |                                               | |" << endl;
	cout << "| |" << duplicateStr(" ", 46-len) << std::to_string(answer) << " | |" << endl;
	cout << "| |_______________________________________________| |" << endl;
	cout << "|                                                   |" << endl;
	cout << "| ################################################  |" << endl;
	cout << "|  ___   ___   ___   ___   ___   ___   ___  ######  |" << endl;
	cout << "| |   | |   | |   | |   | |   | |   | |   | ######  |" << endl;
	cout << "| |PI | |Sin| |Log| | ( | | ) | | % | |CE | ######  |" << endl;
	cout << "| |___| |___| |___| |___| |___| |___| |___| ######  |" << endl;
	cout << "|  ___   ___   ___   ___   ___   ___   ___  ######  |" << endl;
	cout << "| |   | |   | | __| |   | |   | |   | |   | ######  |" << endl;
	cout << "| | e | |Tan| |V  | | 1 | | 2 | | 3 | | / | ######  |" << endl;
	cout << "| |___| |___| |___| |___| |___| |___| |___| ######  |" << endl;
	cout << "|  ___   ___   ___   ___   ___   ___   ___  ######  |" << endl;
	cout << "| |   | |   | |   | |   | |   | |   | |   | ######  |" << endl;
	cout << "| |Ans| |Cos| |x^y| | 4 | | 5 | | 6 | | x | ######  |" << endl;
	cout << "| |___| |___| |___| |___| |___| |___| |___| ######  |" << endl;
	cout << "|  ___               ___   ___   ___   ___  ######  |" << endl;
	cout << "| |   | ##########  |   | |   | |   | |   | ######  |" << endl;
	cout << "| |x! | ##########  | 7 | | 8 | | 9 | | - | ######  |" << endl;
	cout << "| |___| ##########  |___| |___| |___| |___| ######  |" << endl;
	cout << "|       ##########                     ___  ######  |" << endl;
	cout << "| ################################### |   | ######  |" << endl;
	cout << "| ################################### | + | ######  |" << endl;
	cout << "| ################################### |___| ######  |" << endl;
	cout << "|___________________________________________________|" << endl;
}
