#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int findIndex(string arr[], string str, int len) {
	int i = 0;
	while (i < len) {
		if (arr[i] == str) {
			break;
		}
		i++;
	}
	return i;
}

double minToDay(double day, double hour, double minute) {
	return day + (hour/24.0) + (minute/1440.0);
}

int main(int argc, char *argv[]) {
	// ask for number, and planet in the solar system, print number of earth days in (number) (planet) days
	// example: number = 12; planet = "Mercury"; earth days in 12 mercury days
	// mercury = 15*earth
	// 12*mercury = (12*15) * earth
	double numOfDays = atof(argv[1]);
	string planet(argv[2]);
	cout << "Number of earth days in " << numOfDays << " " << planet << " days:";
	string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
	double oneDay[] = {minToDay(58, 15, 30), minToDay(243, 0, 0), minToDay(0, 23, 56), minToDay(1, 0, 37), minToDay(0, 9, 56), minToDay(0, 10, 42), minToDay(0, 17, 14), minToDay(0, 16, 6)};
	cout << oneDay[findIndex(planets, planet, 8)]*numOfDays << endl;
}
