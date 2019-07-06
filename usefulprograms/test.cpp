#include <iostream>
#include <cmath>
#include "calculatorsci.cpp"

using namespace std;

calculator c;
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
	if (found != string::npos)
		return found;
}
bool is_number(std::string& s) {
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}
void encrypt(string *equation) {
	replaceAll(*equation, "e", "c.e");
	replaceAll(*equation, "PI", "c.PI");
	string portion;
	string portion2;
	if (contains(*equation, "^")) {
		for (int x = stringIndex(*equation, "^");; x--) {
			if (!is_number(equation->substr(x, 1)) && equation->substr(x, 1) != ".") {
				break;
			}
			portion += *equation.substr(x, 1);	
		}
		for (int x = stringIndex(*equation, "^");; x++) {
			if (!is_number(equation->substr(x, 1)) && equation->substr(x, 1) != ".") {
				break;
			}
			portion2 += equation->substr(x, 1);
		}
	}
	replaceAll(portion + "^" + portion2, "pow(" + portion + "," + portion2 + ")");
}
int main(int argc, char *argv[]) {
	string equation = "e+PI-3^4";
	encrypt(&equation);
	cout << equation << endl;
}
