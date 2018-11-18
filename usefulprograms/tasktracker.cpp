#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv){
	FILE *fp = fopen("taskfile", "a");
	FILE *fp2;
	FILE *fp3 = fopen("taskfile", "r");
	char chararr[3000];
	char content[3000];
	char command;
	while (1) {
		cout << "Enter command: ";
		scanf("%c", &command);
		getchar();
		if (command == 'a') {
			cout << "Enter task: ";
			fgets(chararr, 3000, stdin);
			fprintf(fp, chararr);
		}else if (command == 'c'){
			fp2 = fopen("taskfile", "w");
			fprintf(fp2, "");
		}else if (command == 'p'){
			while (!feof(fp3)){
				fgets(content, 3000, fp3);
				printf("%s\n", content);
			}
		}else if (command == 'q'){
			break;
		}
		getchar();
	}
	fclose(fp);
}
