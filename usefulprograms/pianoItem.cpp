#include<iostream>
#include<array>
#include<cstdlib>
#include<ctime>

int main(){
	srand(time(0));
	string songOrTech[] = {"song", "tech"};
	if (songsOrTech[rand()%2] == "song"){
		string songs[] = {"Toccatina", "Etude in Ab Major", "Little Prelude in E Minor", "Rondo in C Major", "Happy Time Jazz"};
		cout << songs[rand()%5] << endl;
	}else{
		string types[] = {"scale", "chromatic", "formula", "tontriad", "dom7chord", "dim7chord", "tonarp", "dom7arp", "dim7arp"};
		string type = types[rand()%9];
		if (type == "scale"){
			string scales[] = {"G", "Gm harmonic", "Gm melodic", "E", "Em harmonic", "Em melodic", "B", "Bm harmonic", "Bm melodic", "Db", "C#m harmonic", "C#m melodic"};
			cout << scales[rand()%12] << " scale\n";
		}else if (type == "chromatic"){
			string chroms[] = {"E", "C#"};
			cout << "Chromatic scale starting on " << chroms[rand()%2] << endl;
		}else if (type == "formula"){
			string formulas[] = {"E", "Em"};
			cout << formulas[rand()%2] << " formula pattern\n";
		}else if (type == "tontriad"){
			string tontriads[] = {"G", "Gm", "E", "Em", "B", "Bm", "Db", "C#m"};
			cout << tontriads[rand()%8] << " tonic triad\n";
		}else if (type == "dom7chord"){
			string hands[] = {"left", "right"};
			string dom7chords = {"D7", "B7", "F#7", "Ab7"};
			cout << dom7chords[rand()%4] << " chord with " << hands[rand()%2] << " hand\n";
		}else if (type == "dim7chord"){
			string hands[] = {"left", "right"};
			string dim7chords[] = {"C dim 7", "F# dim 7", "Eb dim 7", "Bb dim 7"};
			cout << dim7chords[rand()%4] << " chord with " << hands[rand()%2] << " hand\n";
		}else if (type == "tonarp"){
			string hands[] = {"left", "right"};
			string tonarps[] = {"G", "Gm", "E", "Em", "B", "Bm", "Db", "C#m"};
			cout << tonarps[rand()%8] << " arpeggio with " << hands[rand()%2];
		}else if (type == "dom7arp"){
			string hands[] = {"left", "right"};
			string dom7arps[] = {"D7", "B7", "Ab7", "F#7"};
			cout << dom7arps[rand()%4] << " arpeggio with " << hands[rand()%2] << endl;
		}else if (type == "dim7arp"){
			string hands[] = {"left", "right"};
			string dim7arps[] = {"F# dim 7", "Eb dim 7", "C dim 7", "Bb dim 7"};
			cout << dim7arps[rand()%4] << " arpeggio with " << hands[rand()%2] << endl;
		}
	}
}
