#include <iostream>

using namespace std;

int main(int argc, char **argv){
	int price;
	cout << "Enter price: ";
	cin >> price;
	cout << price << " plus tax: " << ((double)price/100)*13+price << endl;
}
