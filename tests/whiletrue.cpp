#include<iostream>

using namespace std;

int main(){
	int x = 0;
	while (true){
		cout << ">";
		x++;
		if (x % 689 == 0){
			cout << " $ ";
		}
		if (x % 235 == 0){
			cout << " 3 ";
		}
	}
}
