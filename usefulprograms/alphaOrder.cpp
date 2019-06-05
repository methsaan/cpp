#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdbool>

using namespace std;

int main(int argc, char *argv[]){
	string words[100];
	int len = 0;
	while (1) {
		string ordinal = (len+1)%10 == 1 ? "st" : ((len+1)%10 == 2) ? "nd" : ((len+1)%10 == 3) ? "rd" : "th";
		cout << "Enter " << len+1 << ordinal << " word (*<Q>* to quit): ";
		cin >> words[len];
		if (words[len] == "*<Q>*") {
			break;
		}else {
			len++;
		}
	}
	int range = len;
	for (int i = len; i > 0; i--) {
		for (int x = 0; x < range-1; x++) {
			if (words[x][0] > words[x+1][0]) {
				string temp = words[x];
				words[x] = words[x+1];
				words[x+1] = temp;
			}
		}
		range--;
	}
	cout << endl;
	for (int x = 0; x < len; x++) {
		cout << words[x] << endl;
	}
}
