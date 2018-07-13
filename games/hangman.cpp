#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<array>
#include<cstdbool>
#include<string>

using namespace std;

template<size_t SIZE>
void printStringArray(string start, array<int, SIZE> arrayf, string join, string end){
	cout << start;
	for (int x = 0; x < arrayf.size(); x++){
		if (x < arrayf.size()-1){
			cout << arrayf[x] << join;
		}else {
			cout << arrayf[x];
		}
	}
	cout << end;
}
array<int, SIZE> toArray(string s){
	array<int, SIZE> arr;
	for (int x = 0; x < s.length(); x++){
		arr[x] = s.substr(x, x+1);
	}
	return arr;
}
int main(){
	string word;
	while (true){
		array<string, 8> userprogress;
		array<string, 8> strikepict;
		cout << "Enter a word: ";
		cin >> word;
		//system("clear");
		cout << word << endl;
		cout << toArray(word)[0] << endl;
	}
	return 0;
}
