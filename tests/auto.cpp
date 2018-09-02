#include<iostream>

using namespace std;
int main(){
	auto a = 10;
	auto b = '[';
	auto c = 23.35;
	cout << "a: " << a << "\nb: " << b << "\nc: " << c << endl;
	cout << "a address: " << &a << "\nb address: " << (void *)&b << "\nc address: " << &c << endl;
	cout << "sizeof(a): " << sizeof(a) << "\nsizeof(b): " << sizeof(b) << "\nsizeof(c): " << sizeof(c) << endl;

}
