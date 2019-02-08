#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){
	int xPos = 0;
	while (xPos < 30) {
		system("clear");
		cout << "################################\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout <<	"##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "## ";
		for (int i = 0; i < xPos; i++) {
			cout << " ";
		}
		cout << "#";
		for (int i = 0; i < 26-xPos; i++){
			cout << " ";
		}
		cout << "##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "##                            ##\n";
		cout << "################################\n";
		xPos++;
		for (unsigned long long int x = 0; x < 1000000; x++) {
			;
		}
	}
}
