#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

int main(int argc, char **argv){
	printf("'c' to create new to do list, 'k' to keep original list: ");
	char option = getchar();
	char task[3000];
	int numOfTasks = 0;
	getchar();
	while (1) {
		printf("Enter task: ");
		fgets(task, 3000, stdin);
		if (strcmp(task, "q\n") == 0) {
			break;
		}else if (strcmp(task, "t\n") == 0) {
			system("cat taskfile");
		}else {
			if (option == 'c') {
				fstream fo;
				numOfTasks++;
				fo << numOfTasks << " " << task << endl;
				fo.close();
			}else {
				printf("Can't add task\n");
			}
		}
	}
}
