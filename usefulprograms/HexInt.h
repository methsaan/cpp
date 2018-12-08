#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

class HexInt {
	private:
		int numOfDigits(int num) {
			int x = 0;
			while (true){
				if (pow(10, x) > num) {
					break;
				}
				x++;
			}
			return x;
		}
		string hexVal;
		int decVal;
		string hexArr[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	public:
		HexInt(int dec) {
			decVal = dec;
			for (int x = 0; x < numOfDigits(decVal); x++){
			}
		}
}
