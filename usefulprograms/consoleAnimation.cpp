#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){
	for (int x = 0; x < 10; x++) {
		int xPos = 0;
		while (xPos < 27) {
			system("clear");
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout <<	"@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@ ";
			for (int i = 0; i < xPos-1; i++) {
				cout << " ";
			}
			cout << "X";
			for (int i = 0; i < 28-xPos-1; i++){
				cout << " ";
			}
			cout << "@@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@                            @@\n";
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			xPos++;
			for (double x = 0; x < 200; x += 0.0001) {
				;
			}
		}
	}
}
