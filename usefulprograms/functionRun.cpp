#include <iostream>
#include <cmath>

#include <cstdlib>

using namespace std;

double f(double x) {
	return  -x;
}
int main(int argc, char *argv[]) {
	cout << f(9238) << endl;
	cout << f(9387) << endl;
	cout << f(29837) << endl;
	cout << f(98327) << endl;
	cout << f(92837) << endl;
	cout << f(9823892) << endl;
	cout << f(324) << endl;
}
