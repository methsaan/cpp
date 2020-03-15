#include <iostream>
#include <cmath>

#include <cstdlib>

using namespace std;

double f(double x) {
	return  2*pow(x, 2)-2;
}
int main(int argc, char *argv[]) {
	cout << f(-5) << endl;
	cout << f(-4) << endl;
	cout << f(-3) << endl;
	cout << f(-2) << endl;
	cout << f(-1) << endl;
	cout << f(0) << endl;
	cout << f(1) << endl;
	cout << f(2) << endl;
	cout << f(3) << endl;
	cout << f(4) << endl;
	cout << f(5) << endl;
}
