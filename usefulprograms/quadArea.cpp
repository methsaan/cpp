#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>

using namespace std;

class quadrilateral {
	private:
		string types[] = {"rectangle", "trapezoid", "parallelogram", "kite", "irregular"};
		int coord1[] = {0, 0};
		int coord2[] = {0, 0};
		int coord3[] = {0, 0};
		int coord4[] = {0, 0};
		double area;
		string type;
		quadrilateral(x1, y1, x2, y2, x3, y3, x4, y4) {
			coord1[0] = min(min(min(x1, x2), min(x3, x4)) max(min(x1, x2), min(x3, x4)));
			coord1[1] = min(min(max(y1, y2), max(y3, y4)) max(min(y1, y2), min(y3, y4)));
			coord2[0] = min(max(min(
			coord2[1]
			coord3[0]
			coord3[1]
			coord4[0]
			coord4[1]
		}
		void findType() {
			if () {
				
			}
		}
		void calculateArea() {
			
		}
	public:
		double area() {
			calculateArea();
			return area;
		}
		int coord1x() {
			return coord1[0];
		}
		int coord1y() {
			return coord1[0];
		}
		int coord2x() {
			return coord1[0];
		}
		int coord2y() {
			return coord1[0];
		}
		int coord3x() {
			return coord1[0];
		}
		int coord3y() {
			return coord1[0];
		}
		int coord4x() {
			return coord1[0];
		}
		int coord4y() {
			return coord1[0];
		}
}

int main(int argc, char *argv[]) {
}