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
		}
		int_ operator^(int_ b){
			//to be continued
		}
		int get(){
			return num;
		}
};
int main(){
	int_ x(35);
	int_ y(75);
	x.set(y/3);
	int_ z(x+y);
	cout << z.get() << endl;
}
