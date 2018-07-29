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
		array<int, word.length()> wordarr = toArray(word);
		cout << wordarr[0] << endl;
	}
	return 0;
}
