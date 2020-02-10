#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	int x[8];
	int y[] = {1, 2, 3, 4, 5, 6, 7, 8};
	cout << "Enter pattern (8 terms):";
	cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4] >> x[5] >> x[6] >> x[7];
	int inc[7];
	for (int i = 0; i < 7; i++) {
		inc[i] = x[i+1] - x[i];
	}
	int inc2[7];
	for (int i = 0; i < 7; i++) {
		inc2[i] = inc[i+1] - inc[i];
	}
	string patternType;
	string equation;
	if (inc[0] == inc[1] && inc[1] == inc[2] && inc[2] == inc[3] && inc[3] == inc[4]) {
		patternType = "Linear";
		int intercept = y[0]*inc[0]-x[0];
		equation = "y = " + to_string(inc[0]) + "x" + ((x == 0) ? "" : (((x > 0) ? " + " : " - ") + to_string(intercept)));
	}else if (inc2[0] == inc2[1] && inc2[1] == inc2[2] && inc2[2] == inc2[3] && inc2[3] == inc2[4]) {
		patternType = "Exponential";
		equation = "exp";
	}
	cout << "Pattern type: " << patternType << endl;
	cout << "Equation: " << equation << endl;
}
