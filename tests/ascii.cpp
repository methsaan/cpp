#include<iostream>
#include <stdio.h>
#define DIVIDE 97+78

using namespace std;

int main(){
	char arr[140];
	int num = 1;
	for (int x = 0; x < 126; x++){
		arr[x] = num;
		num++;
	}
	for (int x = 32; x < 126; x++){
		cout << x << ": " << arr[x] << "\t\t";
		if (x % 10 == 1){
			printf("%c", DIVIDE);
			cout << DIVIDE << endl;
		}
	}
	cout << endl;
}
