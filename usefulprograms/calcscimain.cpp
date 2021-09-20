#include <iostream>
#include <fstream>
#include <sstream>
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

bool in_array(string value, string *array, int length) {
	for (int i = 0; i < length; i++) {
		if (value == array[i]) {
			return true;
		}
	}
	return false;
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
	for (int x = 0; x < str.length(); x++) {
		if (str.at(x) == substring.at(0)) {
			return x;
		}
	}
	return -1;
}
bool is_number(std::string& s) {
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}
bool contains_digit(string s) {
	for (int x = 0; x < s.size(); x++) {
		string tmp = s.substr(x, 1);
		if (is_number(tmp)) {
			return 1;
		}
	}
	return 0;
}
int* stringIndexes(string str, string charact) {
	static int indexes[20];
	int cnt = 1;
	for (int x = 0; x < str.length(); x++) {
		if (str.at(x) == charact.at(0)) {
			indexes[cnt++] = x;
			indexes[0] = cnt;
		}
	}
	return indexes;
}
string nextWord(string str, int idx) {
	string word = "";
	string tempstr = str.substr(idx, 1);
	for (int x = idx; tempstr != " "; x++) {
		word += tempstr;
		tempstr = str.substr(x+1, 1);
	}
	return word;
}

string encrypt(string equation) {
	string equation2 = "0 + (" + equation + ")";
	replaceAll(equation2, "e", "c.e");
	replaceAll(equation2, "Ans", "c.getAns()");
	replaceAll(equation2, "PI", "c.PI");
	replaceAll(equation2, "x", "*");
	replaceAll(equation2, "Sin", "c.sine");
	replaceAll(equation2, "Cos", "c.cosine");
	replaceAll(equation2, "Tan", "c.tangent");
	replaceAll(equation2, "log", "c.logarithm");
	replaceAll(equation2, "Sqrt", "c.squareroot");

	string tempStr = "";
	string keywords[] = {"c.e", "c.getAns()", "c.PI", "c.sine", "c.cosine", "c.tangent", "c.logarithm", "c.squareroot"};
	string numbers[] = {".", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

	if (contains(equation2, "!")) {
		while (contains(equation2, "!")) {
			string portion = "";
			int idx = stringIndex(equation2, "!")-1;
			for (int x = idx; in_array(equation2.substr(x, 1), numbers, 11); x--) {
				portion += equation2.substr(x, 1);
			}
			portion = reverse(portion);
			replaceAll(equation2, portion + "!", "c.factorial(" + portion + ")");
		}
	}
	if (contains(equation2, "^")) {
		while (contains(equation2, "^")) {
			// ======================================================== fix cIndexes =======================================================================
			string leftStr = "";
			string rightStr = "";

			int leftParen = 0;
			for (int x = 0; x < equation2.length(); x++) {
				if (equation2.substr(x, 1) == "(") {
					leftParen = x;
				}
			}
			int leftIdx = stringIndex(equation2, "^")-2;
			int rightIdx = stringIndex(equation2, "^")+2;
			if (leftParen) {
				for (int x = leftParen; x < equation2.length(); x++) {
					if (equation2.substr(x, 1) == ")") {
						break;
					}
					if (equation2.substr(x, 1) == "^") {
						leftIdx = x-2;
						rightIdx = x+2;
						break;
					} else {
						leftIdx = stringIndex(equation2, "^")-2;
						rightIdx = stringIndex(equation2, "^")+2;
					}
				}
			}

			int *cIndexes = stringIndexes(equation2, "c");
			int contains_c_beforeExp = 0;
			int cIdx = -1;
			for (int x = 1; x < sizeof(cIndexes)/sizeof(*cIndexes); x++) {
				if ((cIndexes[x] < leftIdx) && (cIndexes[x+1] > leftIdx)) {
					cIdx = cIndexes[x];
					break;
				}
			}
			if (cIdx != -1) {
				contains_c_beforeExp = 1;
				for (int x = cIdx; x < leftIdx; x++) {
					if ((equation2.substr(x, 1) == "+") || (equation2.substr(x, 1) == "-") || (equation2.substr(x, 1) == "x") || (equation2.substr(x, 1) == "/") || (equation2.substr(x, 1) == "%")) {
						contains_c_beforeExp = 0;
					}
				}
			}

			cout << cIndexes[cIdx-1] << endl;
			cout << cIndexes[cIdx] << endl;
			cout << cIndexes[cIdx+1] << endl;

			if (contains_c_beforeExp) {
				leftStr = nextWord(equation2, cIdx);
			} else if (equation2.substr(leftIdx, 1) == ")" && !contains_c_beforeExp) {
				for (int x = leftIdx; equation2.substr(x+1, 1) != "("; x--) {
					leftStr += equation2.substr(x, 1);
				}
				leftStr = reverse(leftStr);
			} else if (in_array(equation2.substr(leftIdx, 1), numbers, 11)) {
				for (int x = leftIdx; in_array(equation2.substr(x, 1), numbers, 11); x--) {
					leftStr += equation2.substr(x, 1);
				}
				leftStr = reverse(leftStr);
			}

			if (equation2.substr(rightIdx, 1) == "c") {
				rightStr = nextWord(equation2, rightIdx);
			} else if (equation2.substr(rightIdx, 1) == "(") {
				string temp = "";
				for (int x = rightIdx; temp != ")"; x++) {
					temp = equation2.substr(x, 1);
					rightStr += temp;
				}
			} else if (in_array(equation2.substr(rightIdx, 1), numbers, 11)) {
				for (int x = rightIdx; in_array(equation2.substr(x, 1), numbers, 11); x++) {
					rightStr += equation2.substr(x, 1);
				}
			}

			replaceAll(equation2, leftStr + " ^ " + rightStr, "pow(" + leftStr + ", " + rightStr + ")");
		}
	}
	if (contains(equation2, "%")) {
		while (contains(equation2, "%")) {
			string portion2 = "";
			string tempstr;
			for (int x = stringIndex(equation2, "%")-1;; x--) {
				tempstr = equation2.substr(x, 1);
				if (!in_array(tempstr, numbers, 11)) {
					break;
				}
				portion2 += equation2.substr(x, 1);
			}
			portion2 = reverse(portion2);
			replaceAll(equation2, portion2 + "%", "percent(" + portion2 + ")");
		}
	}
	return equation2;
}
int main(int argc, char *argv[]) {
	string equation;
	cout << "Enter equation: ";
	getline(cin, equation);
	cout << encrypt(equation) << endl;
	//calculator c;
	//system("clear");
	//string equationlist[1000];
	//cout << "_____________________________________________________" << endl;
	//cout << "| _________________________________________________ |" << endl;
	//cout << "| |                                               | |" << endl;
	//cout << "| |                                             0 | |" << endl;
	//cout << "| |_______________________________________________| |" << endl;
	//cout << "|                                                   |" << endl;
	//cout << "| ################################################  |" << endl;
	//cout << "|  ___   ___   ___   ___   ___   ___   ___  ######  |" << endl;
	//cout << "| |   | |   | |   | |   | |   | |   | |   | ######  |" << endl;
	//cout << "| |PI | |Sin| |Log| | ( | | ) | | % | |CE | ######  |" << endl;
	//cout << "| |___| |___| |___| |___| |___| |___| |___| ######  |" << endl;
	//cout << "|  ___   ___   ___   ___   ___   ___   ___  ######  |" << endl;
	//cout << "| |   | |   | | __| |   | |   | |   | |   | ######  |" << endl;
	//cout << "| | e | |Tan| |V  | | 1 | | 2 | | 3 | | / | ######  |" << endl;
	//cout << "| |___| |___| |___| |___| |___| |___| |___| ######  |" << endl;
	//cout << "|  ___   ___   ___   ___   ___   ___   ___  ######  |" << endl;
	//cout << "| |   | |   | |   | |   | |   | |   | |   | ######  |" << endl;
	//cout << "| |Ans| |Cos| |x^y| | 4 | | 5 | | 6 | | x | ######  |" << endl;
	//cout << "| |___| |___| |___| |___| |___| |___| |___| ######  |" << endl;
	//cout << "|  ___               ___   ___   ___   ___  ######  |" << endl;
	//cout << "| |   | ##########  |   | |   | |   | |   | ######  |" << endl;
	//cout << "| |x! | ##########  | 7 | | 8 | | 9 | | - | ######  |" << endl;
	//cout << "| |___| ##########  |___| |___| |___| |___| ######  |" << endl;
	//cout << "|       ##########                     ___  ######  |" << endl;
	//cout << "| ################################### |   | ######  |" << endl;
	//cout << "| ################################### | + | ######  |" << endl;
	//cout << "| ################################### |___| ######  |" << endl;
	//cout << "|___________________________________________________|" << endl;
	//for (int x = 0;;x++) {
	//	ofstream fo;
	//	fo.open("calcfile.cpp");
	//	string equation;
	//	cin >> equation;
	//	system("clear");
	//	equation = encrypt(equation);
	//	equationlist[x] = equation;
	//	fo << "#include <iostream>" << endl;
	//	fo << "#include <cmath>" << endl;
	//	fo << "#include <cstring>" << endl;
	//	fo << "#include \"calculatorsci.cpp\"" << endl << endl;
	//	fo << "using namespace std;" << endl << endl;
	//	fo << "string duplicateStr(string str, int num) {" << endl;
	//	fo << "\tstring newStr = str;" << endl;
	//	fo << "\tfor (int x = 0; x < num-1; x++) {" << endl;
	//	fo << "\t\tnewStr += str;" << endl;
	//	fo << "\t}" << endl;
	//	fo << "\treturn newStr;" << endl;
	//	fo << "}" << endl;
	//	fo << "int main(int argc, char *argv[]) {" << endl;
	//	fo << "\tcalculator c;" << endl;
	//	fo << "\tc.setAns(" << (x > 0 ? equationlist[x-1] : "0") << ");" << endl;
	//	fo << "\tdouble answer = " << equationlist[x] << ";" << endl;
	//	fo << "\tint len = std::to_string(answer).size();" << endl;
	//	fo << "\tcout << \"_____________________________________________________\" << endl;" << endl;
	//	fo << "\tcout << \"| _________________________________________________ |\" << endl;" << endl;
	//	fo << "\tcout << \"| |                                               | |\" << endl;" << endl;
	//	fo << "\tcout << \"| |\" << duplicateStr(\" \", 46-len) << std::to_string(answer) << \" | |\" << endl;" << endl;
	//	fo << "\tcout << \"| |_______________________________________________| |\" << endl;" << endl;
	//	fo << "\tcout << \"|                                                   |\" << endl;" << endl;
	//	fo << "\tcout << \"| ################################################  |\" << endl;" << endl;
	//	fo << "\tcout << \"|  ___   ___   ___   ___   ___   ___   ___  ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |   | |   | |   | |   | |   | |   | |   | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |PI | |Sin| |Log| | ( | | ) | | % | |CE | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |___| |___| |___| |___| |___| |___| |___| ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"|  ___   ___   ___   ___   ___   ___   ___  ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |   | |   | | __| |   | |   | |   | |   | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| | e | |Tan| |V  | | 1 | | 2 | | 3 | | / | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |___| |___| |___| |___| |___| |___| |___| ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"|  ___   ___   ___   ___   ___   ___   ___  ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |   | |   | |   | |   | |   | |   | |   | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |Ans| |Cos| |x^y| | 4 | | 5 | | 6 | | x | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |___| |___| |___| |___| |___| |___| |___| ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"|  ___               ___   ___   ___   ___  ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |   | ##########  |   | |   | |   | |   | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |x! | ##########  | 7 | | 8 | | 9 | | - | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| |___| ##########  |___| |___| |___| |___| ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"|       ##########                     ___  ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| ################################### |   | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| ################################### | + | ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"| ################################### |___| ######  |\" << endl;" << endl;
	//	fo << "\tcout << \"|___________________________________________________|\" << endl;" << endl;
	//	fo << "}" << endl;
	//	fo.close();
	//	system("g++ calcfile.cpp");
	//	system("./a.out");
	//	system("g++ calcscimain.cpp");
	//}
}
