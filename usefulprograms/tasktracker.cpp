#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

void numOfLines(FILE *file){
	while (!feof(file)){
	}
}
int main(int argc, char **argv){
	FILE *fp = fopen("taskfile", "w");
	FILE *fp2 = fopen("taskfile", "r");
	char task[3000];
	char taskToRead[3000];
	while (1) {
		printf("Enter task: ");
		fgets(task, 3000, stdin);
		if (strcmp(task, "q\n") == 0) {
			fclose(fp);
			break;
		}else if (strcmp(task, "p\n") == 0){
			fscanf(fp2, "%s", taskToRead);
			printf();
		}
		printf("%s", task);
		fprintf(fp, "%s", task);
	}
}
