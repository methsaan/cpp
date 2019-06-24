#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){
	string arg = argv[1];
	string commandstr;
	if (argc > 2) {
		string pattern = argv[2];
		string pattern2 = argc == 4 ? argv[3] : "";
		commandstr = "ls " + arg + "/" + (pattern != "*" ? pattern : "") + "*" + pattern2;
	}else {
		commandstr = "ls " + arg;
	}
	char command[commandstr.length()+1];
	strcpy(command, commandstr.c_str());
	system(command);
}
