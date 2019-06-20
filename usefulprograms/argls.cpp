#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cctype>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){
	string arg = argv[1];
	string commandstr = "ls " + arg;
	char command[commandstr.length()+1];
	strcpy(command, commandstr.c_str());
	system(command);
}
