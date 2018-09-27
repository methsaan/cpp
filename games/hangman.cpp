#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;

void printarr(int len, string start, char arr[], string end, string join){
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
int main(){
	cout.setf(cout.boolalpha);
	cin.setf(cin.boolalpha);
	cout << "Enter word: ";
	char word[20];
	scanf("%s", word);
	int wordlen = 0;
	for (int x = 0; x < sizeof(word)/sizeof(*word); x++){
		if (isalpha(word[x])){
			wordlen++;
		}else{
			break;
		}
	}
	char progress[sizeof(word)/sizeof(*word)];
	for (int x = 0; x < sizeof(word)/sizeof(*word)];x++){
		progress[x] = '_';
	}
	char strikes[sizeof(word/sizeof(*word)+2)];
	strikes[0] = '{';
	for (int x = 1; x < sizeof(word)/sizeof(*word); x++){
		strikes[x] = '.';
	}
	strike[sizeof(word)/sizeof(*word)+1] = '}';
	int strike = 0;
	while (1){
		char letter;
		cout << "Enter letter: ";
		cin >> letter;
		int cnt;
		for (int x = 0; x < sizeof(word)/sizeof(*word); x++){
			if (letter == word[x]){
				cnt++;
			}
		}
		if (cnt > 0){
			cout << "found" << endl;
		}else {
			cout << "not found" << endl;
		}
	}
	return 0;
}
