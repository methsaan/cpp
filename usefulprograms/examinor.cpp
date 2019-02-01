#include<algorithm>
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
	string majMinScales[] = {"C major", "C harmonic minor", "C melodic minor", "D major", "D harmonic minor", "D melodic minor", "F major", "F harmonic minor", "F melodic minor", "Ab major", "G# harmonic minor", "G# melodic minor", "Gb major", "F# harmonic minor", "F# melodic minor"};
	string chromScales[] = {"Starting on D", "Starting on Ab"};
	string formulaPatterns[] = {"D major", "D harmonic minor"};
	string fourNoteChords[] = {"C major", "C minor", "D major", "D minor", "F major", "F minor", "Ab major", "G# minor", "Gb major", "F# minor"};
	string dominantSeventhChords[] = {"G7", "A7", "C7", "Eb7", "Db7"};
	string diminishedSeventhChords[] = {"B dim 7", "C# dim 7", "E dim 7", "G dim 7", "F dim 7"};
	cout << "MAJOR / MINOR SCALES: \n";
	cout << "\t" << majMinScales[rand()%15] << ", " << majMinScales[rand()%15] << ", " << majMinScales[rand()%15] << endl;
	cout << "CHROMATIC SCALES: \n";
	cout << "\t" << chromScales[rand()%2] << endl;
	cout << "FORMULA PATTERN SCALES: \n";
	cout << "\t" << formulaPatterns[rand()%2] << endl;
	cout << "FOUR NOTE CHORDS: \n";
	cout << "\t" << fourNoteChords[rand()%10]  << " and " << fourNoteChords[rand()%10] << endl;
	cout << "DOMINANT SEVENTH CHORDS: \n";
	cout << "\t" << dominantSeventhChords[rand()%5] << " and " << dominantSeventhChords[rand()%5] << endl;
	cout << "DIMISHED SEVENTH CHORDS: \n";
	cout << "\t" << diminishedSeventhChords[rand()%5] << " and " << diminishedSeventhChords[rand()%4] << endl;
	cout << "TONIC ARPEGGIOS:\n";
	cout << "\t" << fourNoteChords[rand()%10] << " and " << fourNoteChords[rand()%8] << endl;
	cout << "DOMINANT SEVENTH ARPEGGIOS:\n";
	cout << "\t" << dominantSeventhChords[rand()%5];
	cout << "DIMINISHED SEVENTH ARPEGGIOS:\n";
	cout << "\t" << diminishedSeventhChords[rand()%5] << endl;
	string u = "\u00Dc";
	std::transform(u.begin(), u.end(), u.begin(), ::tolower);
	cout << "Etude in D Minor\nEtude in G Major\nPassepied in D Major\nF" << u << "r Elise\nList C\n";
}
