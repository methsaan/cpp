#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

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
	while (x > 0 && x < 8 && y > 0 && y < 8) {
		cin >> x >> y;
		p1ships[x-1][y-1] = "V";
	}
	cout << "P2: Enter ship coordinates:" << endl;
	while (x > 0 && x < 8 && y > 0 && y < 8) {
		cin >> x >> y;
		p2ships[x-1][y-1] = "V";
	}
	while (1) {
		cout << "P1: Enter coordinate: ";
		cin >> x >> y;
		p1shot[x-1][y-1] = "#";
		if (p2ships[x-1][y-1] == "V") {
			p2ships[x-1][y-1] = "#";
		}
		cout << "P2: Enter coordinate: ";
		cin >> x >> y;
		p2shot[x-1][y-1] = "#";
		if (p1ships[x-1][y-1] == "V") {
			p1ships[x-1][y-1] = "#";
		}
	}
}
