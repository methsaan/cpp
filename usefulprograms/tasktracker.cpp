#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(int argc, char **argv){
	printf("'c' to create new to do list, 'k' to keep original list: ");
	char option = getchar();
	if (option == 'c') {
		FILE *clearfile = fopen("taskfile", "w");
		fclose(clearfile);
	}
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
				FILE *fp = fopen("taskfile", "a");
				numOfTasks++;
				fprintf(fp, "%d %s", numOfTasks, task);
				fclose(fp);
			}else {
				printf("Can't add task\n");
			}
		}
	}
}
