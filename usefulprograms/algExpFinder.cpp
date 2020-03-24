#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	int x[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int y[8];
	cout << "Enter pattern (8 terms): ";
	cin >> y[0] >> y[1] >> y[2] >> y[3] >> y[4] >> y[5] >> y[6] >> y[7];
	int inc[7];
	for (int i = 0; i < 7; i++) {
		inc[i] = y[i+1] - y[i];
	}
	int inc2[7];
	for (int i = 0; i < 7; i++) {
		inc2[i] = inc[i+1] - inc[i];
	}
	string patternType;
	string equation;
	if (inc[0] == inc[1] && inc[1] == inc[2] && inc[2] == inc[3] && inc[3] == inc[4]) {
		patternType = "Linear";
		int intercept = y[0]-x[0]*inc[0];
		if (inc[0] == 0 && intercept == 0) {
			equation = "y = 0";
		} else if (inc[0] == 1 && intercept == 0) {
			equation = "y = x";
		} else if (inc[0] == -1 && intercept == 0) {
			equation = "y = -x";
		} else if (inc[0] != 0 && inc[0] != 1 && inc[0] != -1 && intercept == 0) {
			equation = "y = " + to_string(inc[0]) + "x";
		} else if (inc[0] == 0 && intercept != 0) {
			equation = "y = " + to_string(intercept);
		} else if (inc[0] == 1 && intercept != 0) {
			string s = (intercept < 0 ? "- " : "+ ");
			equation = "y = x " + s + to_string(abs(intercept));
		} else if (inc[0] == -1 && intercept != 0) {
			string s = (intercept < 0 ? "- " : "+ ");
			equation = "y = -x " + s + to_string(abs(intercept));
		} else {
			equation = "y = " + to_string(inc[0]) + "x " + (intercept < 0 ? "- " : "+ ") + to_string(abs(intercept));
		}
	}else if (inc2[0] <= inc2[1] && inc2[1] <= inc2[2] && inc2[2] <= inc2[3] && inc2[3] <= inc2[4]) {
		patternType = "Exponential";
	}
	cout << "Pattern type: " << patternType << endl;
	cout << "Equation: " << equation << endl;
}
