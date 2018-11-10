#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	int num;
	int percent;
	cout << "Enter number: ";
	cin >> num;
	cout << "Enter percent: ";
	cin >> percent;
	cout << num*(((double)percent)/100) << endl;
}
