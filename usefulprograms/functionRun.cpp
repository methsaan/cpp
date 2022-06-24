#include <iostream>
#include <cmath>

#include <cstdlib>

using namespace std;

double f(double x) {
	return  6*x-10;
}
int main(int argc, char *argv[]) {
	cout << 6 << " | " << f(6) << endl;
	cout << 7 << " | " << f(7) << endl;
	cout << 8 << " | " << f(8) << endl;
	cout << 9 << " | " << f(9) << endl;
}
