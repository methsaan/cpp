#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<array>
#include<cstdbool>

using namespace std;

template<size_t SIZE>
void printstringarray(string start, array<int, SIZE> arrayf, string join, string end){
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
		array<string, 8> userprogress;
		array<string, 8> strikepict;
		cout << "Enter a word: ";
		getline(cin, word);
		cout << word << endl;
	}
	return 0;
}
