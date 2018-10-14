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
	printf("Enter your equation (no spaces): ");
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
	for (int x = 0; x < sizeof(bracketEquation)/sizeof(*bracketEquation); x++){
		if (isdigit(bracketEquation[x])){
			firstNumInBrack[x] = bracketEquation[x];
		}else {
			break;
		}
	}
	printf("%s\n", firstNumInBrack);
}
