#include <cstdlib>
#include <cstdio>
#include <cstring>

int main(int argc, char *argv[]){
	printf("%d\n", argc);
	char *dir = argv[1];
	char *str = "ls ";
	char command[] = strcat(str, dir);
	system(command);
}
