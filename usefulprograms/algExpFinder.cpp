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
	}else if (inc2[0] == inc2[1] && inc2[1] == inc2[2] && inc2[2] == inc2[3] && inc2[3] == inc2[4]) {
		patternType = "Exponential";
		int expInc[] = {y[1]-y[0], y[2]-y[1], y[3]-y[2], y[4]-y[3], y[5]-y[4], y[6]-y[5], y[7]-y[6]};
		for (int x = 0; x < 7; x++) {
			cout << expInc[x] << endl;
		}
		int expIncInc[] = {expInc[1]-expInc[0], expInc[2]-expInc[1], expInc[3]-expInc[2], expInc[4]-expInc[3], expInc[5]-expInc[4], expInc[6]-expInc[5]};
		int expDiff = y[0] - pow(x[0], expIncInc[0]);
		equation = "y = x^" + to_string(expIncInc[0]) + (expDiff < 0 ? to_string(expDiff) : ("+" + to_string(expDiff)));
	}
	cout << "Pattern type: " << patternType << endl;
	cout << "Equation: " << equation << endl;
}
