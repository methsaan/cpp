#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	string function;
	cout << "Enter function using f(x): ";
	getline(cin, function);
	ofstream fo;
	fo.open("functionRun.cpp");
	fo << "#include <iostream>" << endl;
	fo << "#include <cmath>" << endl << endl;
	fo << "#include <cstdlib>" << endl << endl;
	fo << "using namespace std;" << endl << endl;
	fo << "double f(double x) {" << endl;
	fo << "\treturn " << function.substr(function.find("=")+1, function.size()-(function.find("=")+1)) << ";" << endl;
	fo << "}" << endl;
	fo << "int main(int argc, char *argv[]) {" << endl;
	for (int x = 1; x < argc; x++) {
		fo << "\tcout << f(" << argv[x] << ") << endl;" << endl;
	}
	fo << "}" << endl;
	fo.close();
	system("g++ functionRun.cpp");
	system("./a.out");
	system("g++ functionOutput.cpp");
}
