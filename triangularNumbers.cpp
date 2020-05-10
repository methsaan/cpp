#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int temp = 2;
	int triangularNumbers[100];
	triangularNumbers[0] = 1;
	for (int x = 1; x < 100; x++) {
		triangularNumbers[x] = triangularNumbers[x-1]+temp;
		temp++;
	}
	for (int x = 0; x < 10; x++) {
		cout << triangularNumbers[x] << endl;
	}
}
