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
		system("clear");
		cout << word << endl;
		int wordlen = word.size();
		char wordarr[wordlen];
		for (int x = 0;x < wordlen;x++){
			wordarr[x] = word.at(x);
		}
	}
	return 0;
}
