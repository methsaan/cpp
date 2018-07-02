#include<iostream>
#include<array>
#include<cstring>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
	srand(time(0));
	string solidOrBlocked[] = {"solid", "broken"};
	string majMinScales[] = {"G major", "G harmonic minor", "G melodic minor", "E major", "E harmonic minor", "E melodic minor", "B major", "B harmonic minor", "B melodic minor", "Db major", "C# harmonic minor", "C# melodic minor"};
	string chromScales[] = {"Starting on C#", "Starting on E"};
	string formulaPatterns[] = {"E major", "E minor"};
	string tonicTriads[] = {"G major", "G minor", "E major", "E minor", "B major", "B minor", "Db major", "C# minor"};
	string dominantSeventhChords[] = {"D7", "B7", "F#7", "Ab7"};
	string diminishedSeventhChords[] = {"F# dim 7", "Eb dim 7", "Bb dim 7", "C dim 7"};
	string leftOrRight[] = {"left", "right"};
	cout << "MAJOR / MINOR SCALES: \n";
	cout << "\t" << majMinScales[rand()%12] << ", " << majMinScales[rand()%12] << ", " << majMinScales[rand()%12] << endl;
	cout << "CHROMATIC SCALES: \n";
	cout << "\t" << chromScales[rand()%2] << endl;
	cout << "FORMULA PATTERN SCALES: \n";
	cout << "\t" << formulaPatterns[rand()%2] << endl;
	cout << "TONIC TRIADS: \n";
	cout << "\t" << tonicTriads[rand()%8] << " " << solidOrBlocked[rand()%2] << " and " << tonicTriads[rand()%8] << " " << solidOrBlocked[rand()%2] << endl;
	cout << "DOMINANT SEVENTH CHORDS: \n";
	cout << "\t" << dominantSeventhChords[rand()%4] << " " << solidOrBlocked[rand()%2] << " for " << leftOrRight[rand()%2] << " hand " << " and " << dominantSeventhChords[rand()%4] << " " << solidOrBlocked[rand()%2] << " for " << leftOrRight[rand()%2] << endl;
	cout << "DIMISHED SEVENTH CHORDS: \n";
	cout << "\t" << diminishedSeventhChords[rand()%4] << " " << solidOrBlocked[rand()%2] << " for " << leftOrRight[rand()%2] << " hand " << " and " << diminishedSeventhChords[rand()%4] << " " << solidOrBlocked[rand()%2] << " for " << leftOrRight[rand()%2] << endl;
	cout << "TONIC ARPEGGIOS:\n";
	cout << "\t" << tonicTriads[rand()%8] << " with " << leftOrRight[rand()%2] << " hand and " << tonicTriads[rand()%8] << " with " << leftOrRight[rand()%2] << " hand\n";
	cout << "DOMINANT SEVENTH ARPEGGIOS:\n";
	cout << "\t" << dominantSeventhChords[rand()%4] << " with " << leftOrRight[rand()%2] << " hand\n";
	cout << "DIMINISHED SEVENTH ARPEGGIOS:\n";
	cout << "\t" << diminishedSeventhChords[rand()%4] << " with " << leftOrRight[rand()%2] << " hand\n";
	cout << "Toccatina\nEtude in Ab Major\nLittle Prelude in E minor\nRondo in C Major\nHappy Time Jazz\n";
}
