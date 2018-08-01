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
	while (true){
		//initialization of wordarr, wordlen, word, userprogress, and strikepict
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
		printarr(wordlen, "", userprogress, "\n", " ");
		printarr(wordlen+2, "", strikepict, "\n", "");
	}
	return 0;
}
