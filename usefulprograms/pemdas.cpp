#include<iostream>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int indexOf(char a[], char charact, int len) {
	int index = 0;
	for (int x = 0; x < len; x++){
		if (a[x] == charact) {
			index = x;
			break;
		}
	}
	return index;
}

int main(int argc, char **argv){
	char equation[50];
	cout << "Enter your equation (no spaces): ";
	scanf("%s", equation);
	int bracketIndex = indexOf(equation, '(', 50);
	int closeBracketIndex = indexOf(equation, ')', 50);
	char bracketEquation[(closeBracketIndex-bracketIndex)-7];
	int temp = 0;
	for (int x = bracketIndex+1; x < closeBracketIndex; x++){
		bracketEquation[temp] = equation[x];
		temp++;
	}
	char firstNumInBrack[15];
	int fnib_len = 0;
	for (int x = 0; x < sizeof(bracketEquation)/sizeof(*bracketEquation); x++){
		if (isdigit(bracketEquation[x])){
			firstNumInBrack[x] = bracketEquation[x];
			fnib_len++;
		}else {
			break;
		}
	}
	int foundIndex = 0;
	for (int x = 0; x < sizeof(bracketEquation)/sizeof(*bracketEquation); x++){
		if ((bracketEquation[x] == '^') && (bracketEquation[x] == '/') && (bracketEquation[x] == 'x') && (bracketEquation[x] == '-') && (bracketEquation[x] == '+')){
			break;
		}
		foundIndex++;
	}
	cout << foundIndex << endl;
	//char secondNumInBrack[15];
	//int snib_len = 0;
	//for (int x = foundIndex; x < sizeof(bracketEquation)/sizeof(*bracketEquation); x++){
	//	secondNumInBrack[x] = bracketEquation[x];
	//	snib_len++;
	//}
	//cout << secondNumInBrack << endl;
}
