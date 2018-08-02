#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<array>
#include<cstdbool>
#include<string>
#include<cstdio>
#include<algorithm>

using namespace std;

void printarr(int len, string start, string arr[], string end, string join){
	cout << start;
	for (int x = 0; x < len; x++){
		if (x < len){
			cout << arr[x] << join;
		}else{
			cout << arr[x];
		}
	}
	cout << end;
}
int main(){
	string word;
	string userword;
	while (true){
		//initialization of cor, strike, wordarr, wordlen, word, userprogress, and strikepict
		cout << "Enter a word: ";
		cin >> word;
		system("clear");
		cout << word << endl;
		int wordlen = word.size();
		char wordarr[wordlen];
		for (int x = 0;x < wordlen;x++){
			wordarr[x] = word.at(x);
		}
		string userprogress[wordlen+1];
		string strikepict[wordlen+3];
		strikepict[0] = "{";
		for (int x = 1; x < wordlen+1; x++) {
			strikepict[x] = ".";
		}
		strikepict[wordlen+1] = "}";
		for (int x = 0; x < wordlen+1; x++){
			userprogress[x] = "_";
		}
		int strike = 0;
		int cor = 0;
		//game loop
		while (true){
			cin >> userword;
			if (word.find(userword) != std::string::npos){
				cout << "Letter found\n";
				userprogress[distance(wordarr, find(wordarr, wordarr + 5, 3))] = userword;
			}else {
				cout << "Letter not found\n";
				strike++;
				strikepict[strike] = "#";
				if (strike == wordlen){
					cout << "You lose\n";
					break;
				}
			}
			printarr(wordlen+2, "", strikepict, "\n", "");
			printarr(wordlen, "", userprogress, "\n", " ");
		}
	}
	return 0;
}
