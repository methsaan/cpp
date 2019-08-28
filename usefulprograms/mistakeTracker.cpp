#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void splitString(const string &str, vector<string> &output) {
	string::size_type start = 0; // Where to start
	string::size_type last = str.find_first_of(" "); // Finds the first space
	// npos means that the find_first_of wasn't able to find what it was looking for
	// in this case it means it couldn't find another space so we are at the end of the
	// words in the string.
	while (last != string::npos) {
		// If last is greater then start we have a word ready
		if (last > start) {
			output.push_back(str.substr(start, last - start)); // Puts the word into a vector look into how the method substr() works
		}
		start = ++last; // Reset start to the first character of the next word
		last = str.find_first_of(" ", last); // This means find the first space and we start searching at the first character of the next word
	}
	// This will pickup the last word in the file since it won't be added to the vector inside our loop
	output.push_back(str.substr(start));
}

int main(int argc, char *argv[]) {
	ifstream fo("mistakeTracker");
	int totalScore = 0;
	char tempLine[255];
	string tempSkill;
	int tempScore;
	vector<string> tempValues;
	for (int x = 0; x < 15; x++) {
		fo.getline(tempLine, 255);
		splitString(tempLine, tempValues);
		tempSkill = tempValues[0];
		tempScore = stoi(tempValues[tempValues.size()-1]);
		cout << tempScore << endl;
		totalScore += tempScore;
	}
	cout << "Total score: " << totalScore << endl;
}
