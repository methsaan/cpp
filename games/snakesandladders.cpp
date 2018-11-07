#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstdio>

using namespace std;

int isinint(int e, int arr[], int len){
	int is = 0;
	for (int x = 0; x < len; x++){
		if (e == arr[x]){
			is = 1;
		}
	}
	return is;
}
int index(int e, int arr[], int len){
	int index;
	for (int x = 0; x < len; x++){
		index = x;
		if (arr[x] == e){
			break;
		}
	}
	return index;
}
int main(int argc, char **argv){
	int p1square = 0;
	int p2square = 0;
	int temp;
	int snakespots[] = {16, 36, 57, 63, 87, 95};
	int ladderspots[] = {7, 14, 28, 41, 67, 80};
	int snakeland[] = {4, 11, 23, 45, 24, 88};
	int ladderland[] = {13, 37, 84, 58, 74, 100};
	int max = 100;
	while (1) {
		temp = (rand()%6)+1;
		cout << "Player 1: Press enter to roll\n";
		getchar();
		cout << "Rolling ... " << temp << endl;
		p1square += temp;
		cout << "Player 1 is on square number: " << p1square << endl;
		getchar();
		if (isinint(p1square, snakespots, 6)){
			p1square = snakeland[index(p1square, snakespots, 6)];
			cout << "Player 1 landed on a snake" << endl;
			getchar();
			cout << "Player 1 is on square number " << p1square << endl;
			getchar();
		}
		if (isinint(p1square, ladderspots, 6)){
			p1square = ladderland[index(p1square, ladderspots, 6)];
			cout << "Player 1 landed on a ladder" << endl;
			getchar();
			cout << "Player 1 is on square number " << p1square << endl;
			getchar();
		}
		if (p1square >= max){
			cout << "The winner is player 1" << endl;
			break;
		}
		temp = (rand()%6)+1;
		cout << "Player 2: Press enter to roll\n";
		getchar();
		cout << "Rolling ... " << temp << endl;
		p2square += temp;
		cout << "Player 2 is on square number: " << p2square << endl;
		getchar();
		if (isinint(p2square, snakespots, 6)) {
			p2square = snakeland[index(p2square, snakespots, 6)];
			cout << "Player 2 landed on a snake" << endl;
			getchar();
			cout << "Player 2 is on square number " << p2square << endl;
			getchar();
		}
		if (isinint(p2square, ladderspots
	}
}
