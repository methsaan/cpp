#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

int countlines(string filename) {
	FILE *fp = fopen(filename.c_str(), "r");
	int ch = 0;
	int lines = 0;
	if (fp == NULL) {
		return 0;
	}
	lines++;
	while ((ch = fgetc(fp)) != EOF) {
		if (ch == '\n') {
			lines++;
		}
	}
	fclose(fp);
	return lines;
}

int main(int argc, char **argv){
	printf("'c' to create new to do list, 'k' to keep original list, 'r' to remove a list: ");
	char option = getchar();
	char task[3000];
	string fname;
	cout << "Enter to-do list name: ";
	cin >> fname;
	int numOfTasks = countlines(fname);
	if (numOfTasks == 0) {
		numOfTasks++;
	}
	getchar();
	while (1) {
		printf("Enter task%s: ", option == 'r' ? " ('t' to remove file)" : "");
		fgets(task, 3000, stdin);
		if (strcmp(task, "q\n") == 0) {
			break;
		}else if (strcmp(task, "t\n") == 0) {
			if (option == 'r') {
				string command = "rm " + fname;
				system(command.c_str());
				break;
			}
			string command = "cat " + fname;
			system(command.c_str());
		}else {
			if (option == 'c') {
				FILE *fp = fopen(fname.c_str(), "a");
				fprintf(fp, "%d %s", numOfTasks, task);
				numOfTasks++;
				fclose(fp);
			}else {
				printf("Can't add task\n");
			}
		}
	}
}
