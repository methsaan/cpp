#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	double percent;
	double ratio;
	double number;
	cout << "Enter percent: ";
	cin >> percent;
	cout << "Enter ratio: ";
	cin >> ratio;
	number = 100/percent*ratio;
	cout << "total: " << number << endl;
}
