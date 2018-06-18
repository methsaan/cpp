#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include "boost/algorithm/string.hpp"

using namespace std;
using namespace boost;

int main(){
	string word;
	cout << "Enter a word: ";
	cin >> word;
	system("clear");
	string letter = "";
	while (true){
		cout << "Enter a character: ";
		if (contains(word, letter) == true){
			cout << "Yes";
		}else{
			cout << "no";
		}
	}
	return 0;
}
