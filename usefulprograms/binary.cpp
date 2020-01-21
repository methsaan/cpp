#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	int placevalues[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int decimal;
	cout << "Enter decimal value (max 131071): ";
	cin >> decimal;
	if (decimal > 131071) {
		cout << "Too large\n";
		return 0;
	}
	for (int x = 0; x < decimal; x++) {
		placevalues[17]++;
		for (int y = 17; y > 1; y--) {
			if (placevalues[y] == 2) {
				placevalues[y] = 0;
				placevalues[y-1] += 1;
			}else {
				break;
			}
		}
	}
	long int decBinary;
	string binstr;
	for (int x = 0; x < 18; x++) {
		binstr += to_string(placevalues[x]);
	}
	decBinary = stol(binstr);
	cout << decBinary << endl;
}
