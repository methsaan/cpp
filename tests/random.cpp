#include<iostream>
#include<random>

using namespace std;

class Random {
	public:
	int randrange(int start, int end){
		mt19937 rng;
		rng.seed(random_device()());
		uniform_int_distribution<mt19937::result_type> dist6(start, end);
	}
};
int main() {
	Random random;
	int randnum = random.randrange(100, 999);
	cout << randnum << endl;
}
