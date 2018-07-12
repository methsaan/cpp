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
int main(){
	string word;
	while (true){
		cout << "Enter a word: ";
		cin >> word;
		unsigned int len1 = word.length();
		int len2 = len1;
		array<string, len2> userprogress = {"_", "_", "_", "_", "_"};
		array<string, len2+2> strikepict = {"{", ".", ".", ".", ".", ".", "}"};
		//system("clear");
		cout << word.length() << " " << userprogress[1] << " " << strikepict[0] endl;
		/*get<0>(userprogress) = "{";
		for (int x = 1; x < word.length();x++){
			get<x>(strikepict) = ".";
		}
		get<word.length()()+1>(strikepict) = "}";
		for (int x = 0;x < word.length();x++){
			get<x>(userprogress) = "_";
		}*/
		//printStringArray("", strikepict, " ", "");
		//printStringArray("", userprogress, " ", "");
	}
	return 0;
}
