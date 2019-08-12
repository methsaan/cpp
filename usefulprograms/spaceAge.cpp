#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

double minToDay(double day, double hour, double minute) {
	return day + (hour/24.0) + (minute/1440.0);
}

int main(int argc, char *argv[]) {
	// ask for number, and planet in the solar system, print number of earth days in (number) (planet) days
	// ex: number = 12; planet = "Mercury"; earth days in 12 mercury days
	// 1*mercury = 15*earth
	// 12*mercury = (12*15) * earth
	string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
	double planetDayLen[] = {minToDay(58, 15, 30), minToDay(116, 18, 0), minToDay(0, 23, 56), minToDay(1, 0, 37), minToDay(0, 9, 56), minToDay(0, 10, 42), minToDay(0, 17, 14), minToDay(0, 16, 6), 153.3};
	double days = atof(argv[1]);
	string planet(argv[2]);
	double dayLen;
	for (int x = 0; x < sizeof(planets)/sizeof(*planets); x++) {
		if (planets[x] == planet) {
			dayLen = planetDayLen[x];
			break;
		}
	}
	double earthDays = dayLen*days;
	cout << "Earth days in " << days << " " << planet << " days: " << earthDays << endl;
}
