#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	float num;
	float percent;
	cout << "Enter number: ";
	cin >> num;
	cout << "Enter percent: ";
	cin >> percent;
	cout << num*(percent/100) << endl;
}
