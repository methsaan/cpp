#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<array>

using namespace std;

void printarray(string arrayf[], string join){
	for (int x = 0; x < sizeof(arrayf)/sizeof(arrayf[0]); x++){
		cout << arrayf[x] << join << endl;
	}
}

int main(){
	string x[] = {"12", "5123", "46", "124", "362", "352", "6243"};
	printarray(x, ",-");
	return 0;
}
