#include "namespaceTest.h"
#include <iostream>

using namespace std;
using namespace MethsaansFormulas;

int main(){
	double a;
	cout << "Enter a: ";
	cin >> a;
	double b;
	cout << "Enter b: ";
	cin >> b;
	double c;
	cout << "Enter c: ";
	cin >> c;
	cout << SQRTformula(a, b, c) << endl;
	double ans = 10.00;
	MethsaanMath MMO;
	MMO.setSQRT(144, 121, 134, &ans);
	cout << ans << endl;

}
