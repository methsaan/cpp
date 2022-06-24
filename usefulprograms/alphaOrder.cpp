#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdbool>

using namespace std;

int abcGreater(string word1, string word2) {
	string w1;
	string w2;
	if (word1.length() > word2.length()) {
		w1 = word2;
		w2 = word1;
	} else {
		w2 = word1;
		w1 = word2;
	}
	for (int x = 0; x < w1.length(); x++) {
		if (word1[x] < word2[x]) {
			return 0;
		} else if (word1[x] > word2[x]) {
			return 1;
		}
	}
	return 0;
}

int main(int argc, char *argv[]){
	string words[100];
	int len = 0;
	while (1) {
		string ordinal = ((len+1)%10 == 1 && len != 10) ? "st" : ((len+1)%10 == 2 && len != 11) ? "nd" : ((len+1)%10 == 3 && len != 12) ? "rd" : "th";
		cout << "Enter " << len+1 << ordinal << " word (<q> to quit): ";
		cin >> words[len];
		if (words[len] == "<q>") {
			break;
		}else {
			len++;
		}
	}
	int range = len;
	for (int i = len; i > 0; i--) {
		for (int x = 0; x < range-1; x++) {
			if (abcGreater(words[x], words[x+1])) {
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
