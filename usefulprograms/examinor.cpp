#include<algorithm>
#include<iostream>
#include<array>
#include<cstring>
#include<string>
#include<ctime>
#include<cstdlib>
#include<fstream>

using namespace std;

int main(int argc, char *argv[]) {
	srand(time(0));
	int x;
	ofstream fo;
	fo.open("mistakeTracker");
	double score;
	double score2;
	double score3;
	double score4;
	double score5;
	double score6;
	double score7;
	double score8;
	double score9;
	double score10;
	double score11;
	double score12;
	double score13;
	double score14;
	double score15;
	string solidOrBroken[] = {"solid", "broken"};
	string majMinScales[] = {"C major", "C harmonic minor", "C melodic minor", "D major", "D harmonic minor", "D melodic minor", "E major", "E harmonic minor", "E melodic minor", "Bb major", "Bb harmonic minor", "Bb melodic minor", "Eb major", "Eb harmonic minor", "Eb melodic minor", "F# major", "F# harmonic minor", "F# melodic minor"};
	string chromScales[] = {"Starting on E", "Starting on Eb"};
	string formulaPatterns[] = {"Eb major", "Eb harmonic minor"};
	string fourNoteChords[] = {"C major", "C minor", "D major", "D minor", "E major", "E minor", "Bb major", "Bb minor", "Eb major", "Eb minor"};
	string dominantSeventhChords[] = {"G7", "A7", "B7", "F7", "Bb7", "Db7"};
	string diminishedSeventhChords[] = {"B dim 7", "C# dim 7", "D# dim 7", "A dim 7", "D dim 7", "F dim 7"};
	system("clear");
	cout << "MAJOR / MINOR SCALES: \n";
	for (int x = 0; x < 3; x++) {
		cout << majMinScales[rand()%15] << endl;
		for (int x = 0; x < 8; x++) {
			for (long long int y = -200000000; y < 200000000; y++) {
				;
			}
		}
	}
	cout << "Score out of 4: ";
	cin >> score;
	cout << "CHROMATIC SCALES: \n";
	cout << chromScales[rand()%2] << endl;
	for (int x = 0; x < 8; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 3: ";
	cin >> score2;
	cout << "FORMULA PATTERN SCALES: \n";
	cout << formulaPatterns[rand()%2] << endl;
	for (int x = 0; x < 8; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 3: ";
	cin >> score3;
	cout << "FOUR NOTE CHORDS: \n";
	for (int x = 0; x < 2; x++) {
		cout << fourNoteChords[rand()%10] << endl;
		for (int x = 0; x < 10; x++) {
			for (long long int y = -200000000; y < 200000000; y++) {
				;
			}
		}
	}
	cout << "Score out of 4: ";
	cin >> score4;
	cout << "DOMINANT SEVENTH CHORDS: \n";
	for (int x = 0; x < 2; x++) {
		cout << dominantSeventhChords[rand()%5] << " " << solidOrBroken[rand()%2] << endl;
		for (int x = 0; x < 10; x++) {
			for (long long int y = -200000000; y < 200000000; y++) {
				;
			}
		}
	}
	cout << "Score out of 4: ";
	cin >> score5;
	cout << "DIMISHED SEVENTH CHORDS: \n";
	for (int x = 0; x < 2; x++) {
		cout << diminishedSeventhChords[rand()%5] << " " << solidOrBroken[rand()%2] << endl;
		for (int x = 0; x < 10; x++) {
			for (long long int y = -200000000; y < 200000000; y++) {
				;
			}
		}
	}
	cout << "Score out of 3: ";
	cin >> score6;
	cout << "TONIC ARPEGGIOS:\n";
	for (int x = 0; x < 2; x++) {
		cout << fourNoteChords[rand()%10] << endl;
		for (int x = 0; x < 8; x++) {
			for (long long int y = -200000000; y < 200000000; y++) {
				;
			}
		}
	}
	cout << "Score out of 3: ";
	cin >> score7;
	cout << "DOMINANT SEVENTH ARPEGGIOS:\n";
	cout << dominantSeventhChords[rand()%5] << endl;
	for (int x = 0; x < 8; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 4: ";
	cin >> score8;
	cout << "DIMINISHED SEVENTH ARPEGGIOS:\n";
	cout << diminishedSeventhChords[rand()%5] << endl;
	for (int x = 0; x < 8; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 4: ";
	cin >> score9;
	cout << "SONGS:\n";
	cout << "The storm\n";
	for (int x = 0; x < 16; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 6: ";
	cin >> score10;
	cout << "Dance of the Marionettes\n";
	for (int x = 0; x < 16; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 6: ";
	cin >> score11;
	cout << "Menuet and Trio in B Minor\n";
	for (int x = 0; x < 16; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 14: ";
	cin >> score12;
	cout << "Sonatina in E flat Major\n";
	for (int x = 0; x < 16; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 16: ";
	cin >> score13;
	cout << "Lieb Schwesterlein\n";
	for (int x = 0; x < 16; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 14: ";
	cin >> score14;
	cout << "Far Away Friend\n";
	for (int x = 0; x < 16; x++) {
		for (long long int y = -200000000; y < 200000000; y++) {
			;
		}
	}
	cout << "Score out of 12: ";
	cin >> score15;
	fo << "Major/minor scales \t\t" << to_string(score) << endl;
	fo << "Chromatic scales \t\t" << to_string(score2) << endl;
	fo << "Formula pattern scales \t\t" << to_string(score3) << endl;
	fo << "Four note chords \t\t" << to_string(score4) << endl;
	fo << "Dominant 7th chords \t\t" << to_string(score5) << endl;
	fo << "Diminished 7th chords \t\t" << to_string(score6) << endl;
	fo << "Tonic arpeggios \t\t" << to_string(score7) << endl;
	fo << "Dominant 7th arpeggios \t\t" << to_string(score8) << endl;
	fo << "Diminished 7th arpeggios \t\t" << to_string(score9) << endl;
	fo << "The Storm \t\t" << to_string(score10) << endl;
	fo << "Dance of the Marionettes \t\t" << to_string(score11) << endl;
	fo << "Menuet and Trio in B Minor \t\t" << to_string(score12) << endl;
	fo << "Sonatina in E flat Major \t\t" << to_string(score13) << endl;
	fo << "Lieb Schwesterlein \t\t" << to_string(score14) << endl;
	fo << "Far Away Friend \t\t" << to_string(score15) << endl;
	system("g++ mistakeTracker.cpp");
	system("./a.out");
	system("g++ examinor.cpp"); 
}
