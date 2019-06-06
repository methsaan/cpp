#include <iostream>
#include <algorithm>
#include <cmath>
#include <iterator>

using namespace std;

class term {
	public:
		int coefficient;
		string numPolarity;
		string variable;
};

int isIn(string str, string arrstr[], int len) {
	for (int x = 0; x < len; x++) {
		if (arrstr[x] == str) {
			return 1;
		}
	}
	return 0;
}

int main(int argc, char *argv[]) {
	int numOfTerms;
	string variables[100];
	cout << "Enter number of terms in the polynomial (use ^ for power): ";
	cin >> numOfTerms;
	cout << "Enter terms (line by line)\n";
	term polynomial[numOfTerms];
	for (int x = 0; x < numOfTerms; x++) {
		cin >> polynomial[x].coefficient >> polynomial[x].variable;
		polynomial[x].numPolarity = polynomial[x].coefficient < 0 ? "-" : "+";
	}
	int varcnt = 0;
	for (int x = 0; x < sizeof(polynomial)/sizeof(*polynomial); x++) {
		for (int y = 0; y < sizeof(variables)/sizeof(*variables); y++) {
			if (!isIn(polynomial[x].variable, variables, 100)) {
				variables[varcnt] = polynomial[x].variable;
				varcnt++;
			}
		}
	}
	term simpPolynomial[varcnt];
	int tot;
	for (int x = 0; x < varcnt; x++) {
		tot = 0;
		for (int y = 0; y < numOfTerms; y++) {
			if (polynomial[y].variable == variables[x]) {
				tot += polynomial[y].coefficient;
			}
		}
		simpPolynomial[x].coefficient = tot;
		simpPolynomial[x].numPolarity = tot < 0 ? "-" : "+";
		simpPolynomial[x].variable = variables[x];
	}
	cout << "Polynomial: ";
	for (int x = 0; x < numOfTerms; x++) {
		cout << polynomial[x].numPolarity << " " << abs(polynomial[x].coefficient) << polynomial[x].variable << " ";
	}
	cout << endl;
	cout << "Simplified polynomial: ";
	for (int x = 0; x < varcnt; x++) {
		cout << simpPolynomial[x].numPolarity << " " << abs(simpPolynomial[x].coefficient) << simpPolynomial[x].variable << " ";
	}
	cout << endl;
}
