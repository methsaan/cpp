#include<iostream>
#include<cstdlib>
#include<ctime>
#include<array>

using namespace std;

class Random {
	public:
		int randrange(int start, int end){
			srand(time(0));
			return (rand()%end)+start;
		}
		int choice(int * arr){
			srand(time(0));
			return arr[rand()%sizeof(*arr)];
		}
};
int main(){
	Random random;
	int intarray[] = {12, 24, 36, 48, 60};
	cout << random.choice(intarray) << endl;
	cout << random.randrange(25, 144) << endl;
}
