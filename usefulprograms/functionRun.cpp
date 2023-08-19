#include <iostream>
#include <cmath>

#include <cstdlib>

using namespace std;

double f(double x) {
	return  x - 7;
}
int main(int argc, char *argv[]) {
	cout << 2 << " | " << f(2) << endl;
	cout << 3 << " | " << f(3) << endl;
	cout << 4 << " | " << f(4) << endl;
	cout << 5 << " | " << f(5) << endl;
	cout << 6 << " | " << f(6) << endl;
	cout << 7 << " | " << f(7) << endl;
	cout << 8 << " | " << f(8) << endl;
}
