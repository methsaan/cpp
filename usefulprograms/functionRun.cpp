#include <iostream>
#include <cmath>

#include <cstdlib>

using namespace std;

double f(double x) {
	return  -pow(x, 2);
}
int main(int argc, char *argv[]) {
	cout << f(-1) << endl;
}
