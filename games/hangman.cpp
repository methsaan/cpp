#include<iostream>
#include<stdio.h>
using namespace std;

void printarr(int len, string start, string arr[], string end, string join){
	cout << start;
	for (int x = 0; x < len; x++){
		if (x < len-1){
			cout << arr[x] << join;
		}else{
			cout << arr[x];
		}
	}
	cout << end;
}
int searchInArr(string arr[], string toFind){
	int Index = 0;
	for (int x = 0; x < arr->length(); x++){
		if (arr[x] == toFind){
			Index = x;
			break;
		}
	}
	return Index;
}
int main(){
	cout.setf(cout.boolalpha);
	string word;
	cout << "Enter a word: ";
	cin >> word;
	string wordarr[word.length()];
	for (int x = 0; x < word.length(); x++){
		wordarr[x] = word.substr(x, 1);
	}
	string usrword;
	string progress[word.length()];
	for (int x = 0; x < word.length(); x++){
		progress[x] = "_";
	}
	string strikepict;
	int strikes;
	bool won = true;
	while (true) {
		cout << "Enter character: ";
		cin >> usrword;
		if (searchInArr(word, usrword) > 0){
			for (int x = 0; x < word.length(); x++){
				if (wordarr[x] == usrword){
					progress[x] = usrword;
				}
			}
			if (!(searchInArr(word, "_"))){
				won = true;
				break;
			}
		}else {
			strikes++;
			if (strikes == word.length()){
				won = false;
				break;
			}
		}
		printarr(strikepict.length, "Strikes: ", strikepict, "\n", "");
	}
	if (won){
		cout << "You win";
	}else{
		cout << "You lose";
	}
	return 0;
}
