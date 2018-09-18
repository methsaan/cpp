#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream x;
	x.open("anotherfile.cpp");
	x << "#include <iostream>\n";
	x << "using namespace std;\n";
	x << "int main(){\n";
	x << "	cout << \"Hullo\";\n ";
	x << "  cout << endl;\n";
	x << "}\n";
	x.close();
}
