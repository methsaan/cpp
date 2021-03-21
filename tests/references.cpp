#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int x = 10;
	int& y = x;
	cout << x << " " << y << endl;
	x = 20;
	cout << x << " " << y << endl;
	cout << &x << " " << &y << endl;
	y = 30;
	cout << x << " " << y << endl;
}
