#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	double number;
	double ratio;
	double percent;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter ratio: ";
	cin >> ratio;
	percent = ratio/number*100;
	cout << "Percent: " << percent << endl;
}
