#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv){
	double price;
	cout << "Enter price: ";
	cin >> price;
	cout << price << " plus tax: ";
	printf("%.2f\n", ((double)price/100)*13+price);
}
