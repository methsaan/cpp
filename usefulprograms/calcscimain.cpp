#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include "calculatorsci.cpp"
#include <cstring>

using namespace std;

string reverse(string str) {
	string str2 = "";
	for (int x = str.size(); x > -1; x--) {
		str2 += str.substr(x, 1);
	}
	return str2;
}
int contains(string str, string substring) {
	if (str.find(substring) != std::string::npos) {
		return 1;
	}
	return 0;
}
void replaceAll(std::string& subject, const std::string& search, const std::string& replace) {
	size_t pos = 0;
	while((pos = subject.find(search, pos)) != std::string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
}
int stringIndex(string str, string substring) {
	size_t found = str.find(substring); 
	if (found != string::npos) {
		return found;
	}
}
bool is_number(std::string& s) {
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}
string encrypt(string equation) {
	string equation2 = equation;
	replaceAll(equation2, "e", "c.e");
	replaceAll(equation2, "PI", "c.PI");
	replaceAll(equation2, "x", "*");
	string portion;
	string portion2;
	string tempstr;
	if (contains(equation2, "^")) {
		for (int x = stringIndex(equation2, "^")-1;; x--) {
			tempstr = equation2.substr(x, 1);
			if ((!is_number(tempstr)) && (equation2.substr(x, 1) != ".")) {
				break;
			}
			portion += equation2.substr(x, 1);
		}
		for (int x = stringIndex(equation2, "^")+1;; x++) {
			tempstr = equation2.substr(x, 1);
			if ((!is_number(tempstr)) && (equation2.substr(x, 1) != ".")) {
				break;
			}
			portion2 += equation2.substr(x, 1);
		}
	}
	replaceAll(equation2, reverse(portion) + "^" + portion2, "pow(" + reverse(portion) + "," + portion2 + ")");
	return equation2;
}
int main(int argc, char *argv[]) {
	calculator c;
	cout << "_____________________________________________________" << endl;
	cout << "| _________________________________________________ |" << endl;
	cout << "| |                                               | |" << endl;
	cout << "| |                                             0 | |" << endl;
	cout << "| |_______________________________________________| |" << endl;
	cout << "|                                                   |" << endl;
	cout << "| ################################################  |" << endl;
	cout << "|  ___   ___   ___   ___   ___   ___   ___  ######  |" << endl;
	cout << "| |   | |   | |   | |   | |   | |   | |   | ######  |" << endl;
	cout << "| |PI | |Sin| |Log| | ( | | ) | | % | |CE | ######  |" << endl;
	cout << "| |___| |___| |___| |___| |___| |___| |___| ######  |" << endl;
	cout << "|  ___   ___   ___   ___   ___   ___   ___  ######  |" << endl;
	cout << "| |   | |   | | __| |   | |   | |   | |   | ######  |" << endl;
	cout << "| | e | |Tan| |V  | | 1 | | 2 | | 3 | | / | ######  |" << endl;
	cout << "| |___| |___| |___| |___| |___| |___| |___| ######  |" << endl;
	cout << "|  ___   ___   ___   ___   ___   ___   ___  ######  |" << endl;
	cout << "| |   | |   | |   | |   | |   | |   | |   | ######  |" << endl;
	cout << "| |Ans| |Cos| |x^y| | 4 | | 5 | | 6 | | x | ######  |" << endl;
	cout << "| |___| |___| |___| |___| |___| |___| |___| ######  |" << endl;
	cout << "|  ___               ___   ___   ___   ___  ######  |" << endl;
	cout << "| |   | ##########  |   | |   | |   | |   | ######  |" << endl;
	cout << "| |x! | ##########  | 7 | | 8 | | 9 | | - | ######  |" << endl;
	cout << "| |___| ##########  |___| |___| |___| |___| ######  |" << endl;
	cout << "|       ##########                     ___  ######  |" << endl;
	cout << "| ################################### |   | ######  |" << endl;
	cout << "| ################################### | + | ######  |" << endl;
	cout << "| ################################### |___| ######  |" << endl;
	cout << "|___________________________________________________|" << endl;
	while (true) {
		fstream fo;
		fo.open("calcfile.cpp");
		string equation;
		cin >> equation;
		system("clear");
		equation = encrypt(equation);
		fo << "#include <iostream>" << endl;
		fo << "#include <cmath>" << endl;
		fo << "#include <cstring>" << endl;
		fo << "#include \"calculatorsci.cpp\"" << endl << endl;
		fo << "using namespace std;" << endl << endl;
		fo << "calculator c;" << endl << endl;
		fo << "int main(int argc, char *argv[]) {" << endl;
		fo << "\tdouble answer = " << equation << ";" << endl;
		fo << "\tcout << \"_____________________________________________________\" << endl;" << endl;
		fo << "\tcout << \"| _________________________________________________ |\" << endl;" << endl;
		fo << "\tcout << \"| |                                               | |\" << endl;" << endl;
		fo << "\tcout << \"| |                                          \" << answer << \"     | |\" << endl;" << endl;
		fo << "\tcout << \"| |_______________________________________________| |\" << endl;" << endl;
		fo << "\tcout << \"|                                                   |\" << endl;" << endl;
		fo << "\tcout << \"| ################################################  |\" << endl;" << endl;
		fo << "\tcout << \"|  ___   ___   ___   ___   ___   ___   ___  ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |   | |   | |   | |   | |   | |   | |   | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |PI | |Sin| |Log| | ( | | ) | | % | |CE | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |___| |___| |___| |___| |___| |___| |___| ######  |\" << endl;" << endl;
		fo << "\tcout << \"|  ___   ___   ___   ___   ___   ___   ___  ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |   | |   | | __| |   | |   | |   | |   | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| | e | |Tan| |V  | | 1 | | 2 | | 3 | | / | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |___| |___| |___| |___| |___| |___| |___| ######  |\" << endl;" << endl;
		fo << "\tcout << \"|  ___   ___   ___   ___   ___   ___   ___  ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |   | |   | |   | |   | |   | |   | |   | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |Ans| |Cos| |x^y| | 4 | | 5 | | 6 | | x | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |___| |___| |___| |___| |___| |___| |___| ######  |\" << endl;" << endl;
		fo << "\tcout << \"|  ___               ___   ___   ___   ___  ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |   | ##########  |   | |   | |   | |   | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |x! | ##########  | 7 | | 8 | | 9 | | - | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| |___| ##########  |___| |___| |___| |___| ######  |\" << endl;" << endl;
		fo << "\tcout << \"|       ##########                     ___  ######  |\" << endl;" << endl;
		fo << "\tcout << \"| ################################### |   | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| ################################### | + | ######  |\" << endl;" << endl;
		fo << "\tcout << \"| ################################### |___| ######  |\" << endl;" << endl;
		fo << "\tcout << \"|___________________________________________________|\" << endl;" << endl;
		fo << "}" << endl;
		fo.close();
		system("g++ calcfile.cpp");
		system("./a.out");
		system("g++ calcscimain.cpp");
	}
}
