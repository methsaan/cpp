#include <iostream>

using namespace std;
class int_{
	private:
		int num;
	public:
		int_(int n){
			num = n;
		}
		void set(int_ number){
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
	a.set(b/3);
	int_ c(a+b);
	int d = c.to_int();
	int_ e = c.get();
	e.set(a+b);
	int f = (e/a).to_int();
	cout << f << endl;
}
