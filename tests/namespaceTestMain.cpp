#include "namespaceTest.h"
#include <iostream>

using namespace std;
using namespace MethsaansFormulas;

int main(){
	MethsaanMath m;
	double a;
	cout << "Enter a: ";
	cin >> a;
	double b;
	cout << "Enter b: ";
	cin >> b;
	double c;
	cout << "Enter c: ";
	cin >> c;
	cout << m.SQRTformula(a, b, c) << endl;
	double ans = 10.00;
	m.setSQRT(a, b, c, &ans);
	cout << ans << endl;

}
