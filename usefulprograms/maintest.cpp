#include <iostream>
#include "number.cpp"

using namespace std;

int main() {
	number numtest(24);
	number numtest2(23);
	number numtest3 = numtest / numtest2;
	cout << numtest3.num1() << endl;
	number ans((*new number(15)) + (*new number(29)));
	cout << ans.num1() << endl;
	// find c++ equivalent of "new" in java
}
