#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<cstring>

using namespace std;

int main(){
	string word;
	cout << "Enter a word: ";
	cin >> word;
	system("clear");
	string letter = "";
	while (true){
		cout << "Enter a character: ";
		if (word.find(letter)){
			cout << "Yes\n";
		}else{
			cout << "no\n";
		}
	}
	return 0;
}
