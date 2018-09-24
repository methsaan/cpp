#include<iostream>
#include<stdio.h>
#include<ctype.h>
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
	printarr(wordlen, "word: {", word, "}\n", ", ");

	return 0;
}
