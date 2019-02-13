#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){
	for (int x = 0; x < 10; x++) {
		int xPos = 0;
		while (xPos < 30) {
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
			for (int i = 0; i < 26-xPos-1; i++){
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
			for (unsigned long long int x = 0; x < 100000; x++) {
				;
			}
		}
	}
}
