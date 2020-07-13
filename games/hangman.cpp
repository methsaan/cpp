#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
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
	char progress[wordlen];
	for (int x = 0; x < wordlen; x++){
		progress[x] = '_';
	}
	char strikes[wordlen+2];
	strikes[0] = '{';
	for (int x = 1; x < wordlen+1; x++){
		strikes[x] = '.';
	}
	strikes[wordlen+1] = '}';
	printarr(wordlen+1, "", strikes, "", "");
	int strike = 0;
	bool won = true;
	system("clear");
	while (1){
		char letter;
		cout << "Enter letter: ";
		cin >> letter;
		int cnt = 0;
		for (int x = 0; x < wordlen; x++){
			if (letter == word[x]){
				cnt++;
			}
		}
		if (cnt > 0){
			for (int x = 0; x < wordlen; x++){
				if (word[x] == letter){
					progress[x] = letter;
				}
			}
			int count = 0;
			for (int x = 0; x < wordlen; x++){
				if (progress[x] == '_'){
					count++;
				}
			}
			printarr(wordlen, "", progress, "\n", " ");
			printarr(wordlen+2, "", strikes, "\n", "");
			if (count == 0){
				won = true;
				break;
			}
		}else {
			strike++;
			strikes[strike] = '#';
			printarr(wordlen, "", progress, "\n", " ");
			printarr(wordlen+2, "", strikes, "\n", "");
			if (strike >= wordlen){
				won = false;
				break;
			}
		}
	}
	if (won == true){
		cout << "you win\n";
	}else{
		cout << "you lose\n";
	}
	cout << "word: " << word << endl;
	return 0;
}
