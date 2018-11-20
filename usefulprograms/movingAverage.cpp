#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char **argv){
	int numbers[100];
	int numOfnums = 0;
	char number[100];
	int total;
	double average;
	for (int x = 0;; x++){
		total = 0;
		cout << "Enter a number: ";
		scanf("%s", number);
		if (strcmp(number, "QUIT") == 0){
			break;
		}
		numbers[x] = atoi(number);
		numOfnums++;
		for (int y = 0; y < numOfnums; y++){
			total += numbers[y];
		}
		average = (double)total/(double)numOfnums;
		cout << "The average is now: " << average << endl;
	}
}
