#include <cstdio>

int main(int argc, char **argv){
	unsigned char chararr[255];
	for (int x = 0; x < 255; x++) {
		chararr[x] = x;
		printf("%c ", chararr[x]);
	}
}
