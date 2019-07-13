//0	0
//1	1	+1
//2	10	+9
//3	11	+1
//4	100	+89
//5	101	+1
//6	110	+9
//7	111	+1
//8	1000	+889
//9	1001	+1
//10	1010	+9
//11	1011	+1
//12	1100	+89
//13	1101	+1
//14	1110	+9
//15	1111	+1
//16	10000	+8889
//17	10001	+1
//18	10010	+9
//19	10011	+1
//20	10100	+89
//21	10101	+1
//22	10110	+9
//23	10111	+1
//24	11000	+889
//25	11001	+1
//26	11010	+9
//27	11011	+1
//28	11100	+89
//29	11101	+1
//30	11110	+9
//31	11111	+1
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double log2(double num) {
	return log(num) / log(2);
}
int decToBinary(int decimal) {
	string binary = "";
	string digits[] = {"0", "1"};
	int numOfDigits = (int)log2(decimal);
	for (int x = 0; x < numOfDigits; x++) {
		binary += digits[1]
	}
	return stoi(binary);
}

int main(int argc, char *argv[]) {
}
