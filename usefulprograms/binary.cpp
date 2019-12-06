#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	int placevalues[] = {0, 0, 0, 0, 0, 0, 0, 0};
	int decimal;
	cout << "Enter decimal value: ";
	cin >> decimal;
	int y = 7;
	int z = 7;
	for (int x = 0; x < decimal; x++) {
		int y = 7;
		placevalues[y] += 1;
		if (placevalues[y] == 2) {
			placevalues[y] = 0;
			placevalues[y-1] += 1;
		} else {
			break;
		}
	}
	for (int x = 0; x < 8; x++) {
		cout << placevalues[x];
	}
	cout << endl;
}
