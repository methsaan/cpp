#include <cmath>
#include <iostream>

using namespace std;

class calculator {
	public:
		const double PI = 3.141592653589793238;
		const double e = 2.71828182846;
		double sine(double angle) {
			return sin(angle*PI/180);
		}
		double cosine(double angle) {
			return cos(angle*PI/180);
		}
		double tangent(double angle) {
			return tan(angle*PI/180);
		}
		double logarithm(double num) {
			return log(num);
		}
		double squareroot(double base) {
			return sqrt(base);
		}
		double power(double base, double exp) {
			return pow(base, exp);
		}
		double percent(double num) {
			return num/100;
		}
		double factorial(double num) {
			double result = 1;
			for (int x = 1; x < num; x++ ){
				result *= x+1;
			}
			return result;
		}
};
