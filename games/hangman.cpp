#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<array>
#include<cstdbool>
#include<string>
#include<cstdio>

using namespace std;

int main(){
	string word;
	while (true){
		//initialization of word, userprogress, and strikepict
		cout << "Enter a word: ";
		cin >> word;
		system("clear");
		cout << word << endl;
		int wordlen = word.size();
		array<string, wordlen> userprogress;
		array<string, wordlen+2> strikepict;
		char wordarr[wordlen];
		for (int x = 0;x < wordlen;x++){
			wordarr[x] = word.at(x);
		}
		for (int x = 0;x < wordlen;x++){
			userprogress[x] = "_";
		}
		int a;
		strikepict[0] = "{";
		for (a = 1; a < wordlen-1; a++){
			strikepict[a] = "#";
		}
		strikepict[wordlen] = "}";
		//loop
		for (int x = 0; x < strikepict.size(); x++){
			cout << strikepict[x] << endl;
		}
		for (int x = 0; x < userprogress.size(); x++){
			cout << userprogress[x] << endl;
		}
	}
	return 0;
}
