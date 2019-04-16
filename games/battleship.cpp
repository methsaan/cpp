#include <iostream>
#include <cstdlib>

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
	while (1) {
		cout << "P1: Enter coordinate: ";
		cin >> x >> " " >> y;
		p1shot[x-1][y-1] = "#";
		cout << "P2: Enter coordinate: ";
		cin >> x >> " " >> y;
		p2shot[x-1][y-1] = "#";
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cout << p1shot[i][j];
			}
			cout << endl;
		}
	}
}
