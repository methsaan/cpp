#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<array>
#include<cstdbool>
#include<string>

using namespace std;

int main(){
	string word;
	while (true){
		array<string, 8> userprogress;
		array<string, 8> strikepict;
		cout << "Enter a word: ";
		cin >> word;
		//system("clear");
		cout << word << endl;
		int wordlen = word.size();
		int wordarr[wordlen];
		for (int idx = 0; idx < wordlen; idx++){
			wordarr[idx] = word.at(idx) - '0';
		}
		cout << wordarr[1] << endl;
	}
	return 0;
}
