#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<array>

using namespace std;

void printarray(string arrayf[], string join){
	for (int x = 0; x < arrayf->size(); x++){
		cout << arrayf[x] << join;
	}
}

int main(){
	string word;
	cout << "Enter a word: ";
	cin >> word;
	system("clear");
	string letter = "";
	cout << word.length;
	/*string progress[word.length];
	for (int x = 0; x < word.length; x++){
		progress[x] = "_";
	}
	string strikes[word.length+2];
	strikes[0] = "{";
	for (int x = 1; x < floor(((word.length/5)*3) + 0.5); x++){
		strikes[x] = ".";
	}
	strikes[word.length+2] = "}";
	int strike = 0;
	while (true){
		cout << "Enter a character: ";
		cin >> letter;
		if (!word.find(letter)){
			cout << "Yes\n";
			progress[3] = "C";
			progress[4] = "+";
			progress[5] = "+";
		}else{
			cout << "no\n";
			printarray(strikes, "");
			strike++;
			strikes[strike] = "#";
			if (strike == 10){
				cout << "GAME OVER";
				break;
			}
		}
		printarray(progress, " ");
	}*/
	return 0;
}
