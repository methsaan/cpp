#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>

using namespace std;

bool in_array(string value, string *array, int length) {
	for (int i = 0; i < length; i++) {
		if (value == array[i]) {
			return true;
		}
	}
	return false;
}


int main(int argc, char *argv[]) {
	string p1ships[8][8];
	string p2ships[8][8];
	string p1shot[8][8];
	string p2shot[8][8];
	int x, y;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			p1ships[i][j] = ".";
			p2ships[i][j] = ".";
			p1shot[i][j] = ".";
			p2shot[i][j] = ".";
		}
	}
	cout << "P1: Enter ship coordinates:" << endl;
	do {
		cin >> x >> y;
		if (x != -1) {
			p1ships[x-1][y-1] = "V";
		}
	} while (x != -1);
	system("clear");
	x = y = 1;
	cout << "P2: Enter ship coordinates:" << endl;
	do {
		cin >> x >> y;
		if (x != -1) {
			p2ships[x-1][y-1] = "V";
		}
	} while (x != -1);
	system("clear");
	while (1) {
		cout << "P1: Enter coordinate: ";
		cin >> x >> y;
		if (p1shot[x-1][y-1] != "#") {
			p1shot[x-1][y-1] = "#";
			if (p2ships[x-1][y-1] == "V") {
				cout << "Hit" << endl;
				p2ships[x-1][y-1] = "#";
			}else {
				cout << "Miss" << endl;
			}
		}else {
			cout << "Already shot" << endl;
		}
		int sunk = 1;
		for (int x = 0; x < 8; x++) {
			if (in_array("V", p2ships[x], 8)) {
				sunk = 0;
				break;
			}
		}
		cout << "Player 1 look away\n\n";
		for (long int x = 0; x < 500000000; x++) {
			;
		}
		cout << "  1 2 3 4 5 6 7 8\n";
		for (int i = 0; i < 8; i++) {
			cout << i+1 << " ";
			for (int j = 0; j < 8; j++) {
				cout << p2ships[i][j] << " ";
			}
			cout << "\n";
		}
		if (sunk) {
			cout << "P1 wins!!" << endl;
			break;
		}
		for (long int x = 0; x < 1000000000; x++) {
			;
		}
		system("clear");
		cout << "P2: Enter coordinate: ";
		cin >> x >> y;
		if (p2shot[x-1][y-1] != "#") {
			p2shot[x-1][y-1] = "#";
			if (p1ships[x-1][y-1] == "V") {
				cout << "Hit" << endl;
				p1ships[x-1][y-1] = "#";
			}else {
				cout << "Miss" << endl;
			}
		}else {
			cout << "Already shot" << endl;
		}
		cout << "Player 2 look away\n\n";
		for (long int x = 0; x < 500000000; x++) {
			;
		}
		cout << "  1 2 3 4 5 6 7 8\n";
		for (int i = 0; i < 8; i++) {
			cout << i+1 << " ";
			for (int j = 0; j < 8; j++) {
				cout << p1ships[i][j] << " ";
			}
			cout << endl;
		}
		sunk = 1;
		for (int x = 0; x < 8; x++) {
			if (in_array("V", p1ships[x], 8)) {
				sunk = 0;
				break;
			}
		}
		if (sunk) {
			cout << "P2 wins!!" << endl;
			break;
		}
		for (long int x = 0; x < 1000000000; x++) {
			;
		}
		system("clear");
	}
}
