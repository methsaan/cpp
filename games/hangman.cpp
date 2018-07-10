#include<iostream>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<array>

using namespace std;

void printstringarray(string start, array<string, 7> arrayf, string join){
	cout << "$";
	for (int x = 0; x < arrayf.size(); x++){
		cout << arrayf[x] << join;
	}
}

int main(){
	array<string, 7> x = {"12", "5123", "46", "124", "362", "352", "6243"};
	printstringarray("$", x, " $");
	cout << endl;
	return 0;
}
