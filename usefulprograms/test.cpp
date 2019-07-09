#include <iostream>
#include <cmath>
#include <cstring>
#include "calculatorsci.cpp"

using namespace std;

calculator c;
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
int main(int argc, char *argv[]){
	cout << c.Ans << endl;
	c.Ans = 23;
	cout << c.Ans << endl;
}
