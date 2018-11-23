#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	string english;
	string piglatin;
	cout << "Enter a string: ";
	cin >> english;
	piglatin = english.substr(1, english.length-1)+english.substr(0, 1)+"ay";
	cout << piglatin << endl;
}
