#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
	srand(time(NULL));
	string items[] = {"C major scale", "C harmonic minor scale", "C melodic minor scale", "D major scale", "D harmonic minor scale", "D melodic minor scale", "F major scale", "F harmonic minor scale", "F melodic minor scale", "Ab major scale", "G# harmonic minor scale", "G# melodic minor scale", "Gb major scale", "F# harmonic minor scale", "F# melodic minor", "D major formula pattern scale", "D harmonic minor formula pattern scale", "C major four note chord", "C minor four note chord", "D major four note chord", "D minor four note chord", "F major four note chord", "F minor four note chord", "Ab major four note chord", "G# minor four note chord", "Gb major four note chord", "F# minor four note chord", "G7 chord solid", "G7 chord broken", "A7 chord solid", "C7 chord broken", "C7 chord solid", "Eb7 chord broken", "Eb7 chord solid", "Db7 chord broken", "Db7 chord solid", "B dim 7 chord broken ", "B dim 7 chord solid ", "C# dim 7 chord broken ", "C# dim 7 chord solid ", "E dim 7 chord broken ", "E dim 7 chord solid ", "E dim 7 chord broken ", "E dim 7 chord solid ", "G dim 7 chord broken ", "G dim 7 chord solid ", "G dim 7 chord broken ", "F dim 7 chord solid ", "F dim 7 chord broken ", "C major arpeggio ", "D major arpeggio ", "C minor arpeggio ", "D minor arpeggio ", "F major arpeggio ", "Ab major arpeggio ", "F minor arpeggio ", "G# minor arpeggio ", "Gb major arpeggio ", "F# major arpeggio ", "G7 arpeggio ", "A7 arpeggio ", "C7 arpeggio ", "Eb7 arpeggio ", "Db7 arpeggio ", "B dim7 arpeggio ", "C# dim7 arpeggio ", "E dim7 arpeggio ", "G dim7 arpeggio ", "F dim7 arpeggio ", "Etude in D Minor", "Etude in G Major", "Bourree in F Major", "Fur Elise", "Rock Zone"};
	cout << items[rand()%91] << endl;
}
