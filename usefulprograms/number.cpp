#include <iostream>
#include <cmath>

class number {
	private:
		double num;
	public:
		number(double n) {
			num = n;
		}
		number operator+ (number num2) {
			number answer(num + num2.num);
			return answer;
		}
		number operator- (number num2) {
			number answer(num - num2.num);
			return answer;
		}
		number operator* (number num2) {
			number answer(num * num2.num);
			return answer;
		}
		number operator/ (number num2) {
			number answer(num / num2.num);
			return answer;
		}
		number operator^ (number num2) {
			number answer(pow(num, num2.num));
			return answer;
		}
		number operator% () {
			number answer(num/100);
			return answer;
		}
		double num1() {
			return num;
		}
		// add word functions (log, sin, cos, tan, sqrt)
};
