#include <iostream>
#include <cmath>

using namespace std;

class int_{
	private:
		int num;
	public:
		int_(int n){
			num = n;
		}
		int_ operator=(int_ number){
			num = number.num;
		}
	       	int_ operator+(int_ b){
			int_ x(num + b.num);
			return x;
		}
		int_ operator-(int_ b){
			int_ x(num - b.num);
			return x;
		}
		int_ operator*(int_ b){
			int_ x(num * b.num);
			return x;
		}
		int_ operator/(int_ b){
			int_ x(num / b.num);
			return x;
		}
		int_ operator%(int_ b){
			int_ x(num / b.num);
			return x;
		}
		int_ operator^(int_ b){
			int_ x(pow(num, b.num));
			return x;
		}
		int_ get(){
			return int_(num);
		}
		int to_int(){
			return num;
		}
};
int main(){
	int_ a(35);
	int_ b(75);
	a = b/3;
	int_ c(a + b);
	int d = c.to_int();
	int_ e = c.get();
	e = a^2;
	int f = (e+a).to_int();

	cout << "a (int_): " << a.to_int() << endl;
	cout << "b (int_): " << b.to_int() << endl;
	cout << "c (int_): " << c.to_int() << endl;
	cout << "d (int): " << d << endl;
	cout << "e (int_): " << e.to_int() << endl;
	cout << "f (int): " << f << endl;
}
