#include <string.h>
#include <iostream>

class Str {
	private:
		char String[300];
	public:
		Str(char str[]){
			strcpy(String, str);
		}
};
