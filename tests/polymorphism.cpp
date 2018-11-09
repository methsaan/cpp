#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class parent{
	public:
		parent(){
			cout << "Parent class" << endl;
		}
		int getvar1(){
			return var1; 
		}
		float getvar2(){
			return var2;
		}
		long long int getvar3(){
			return var3;
		}
		double getvar4(){
			return var4;
		}
		char getvar5(){
		}
		bool getvar6(){
		}
	private:
		int var1 = 15;
		float var2 = 12.134241;
		long long int var3 = 12341234123;
		double var4 = 3.141593;
		char var5;
		bool var6;
};

class child : public parent {
	public:
		child(){
			cout << "child class" << endl;
		}
		char getvar5(){
			return var5;
		}
		bool getvar6(){
			return var6;
		}
	private:
		char var5 = '$';
		bool var6 = true;
};
class child2 : public parent {
	public:
		child2(){
			cout << "child2 class" << endl;
		}
		char getvar5(){
			return var5;
		}
		bool getvar6(){
			return var6;
		}
	private:
		char var5 = 'p';
		bool var6 = false;
};
class child3 : public parent {
	public:
		child3(){
			cout << "child3 class" << endl;
		}
		char getvar5(){
			return var5;
		}
		char getvar6(){
			return var6;
		}
	private:
		char var5 = 'N';
		char var6 = false;
};
void printvar1(parent x){
	cout << x.getvar1() << endl;
}
int main(int argc, char **argv){
	cout.setf(cout.boolalpha);
	parent p;
	child c1;
	child2 c2;
	child3 c3;
	parent parentlist[] = {c1, c2, c3};
	for (int x = 0; x < sizeof(parentlist)/sizeof(*parentlist); x++){
		cout << parentlist[x].getvar1() << endl;
		cout << parentlist[x].getvar2() << endl;
		cout << parentlist[x].getvar3() << endl;
		cout << parentlist[x].getvar4() << endl;
		cout << parentlist[x].getvar5() << endl;
		cout << parentlist[x].getvar6() << endl << endl;
	}
	printvar1(p);
	printvar1(c1);
	printvar1(c2);
	printvar1(c3);
	cout << c3.getvar6() << endl;
	return 0;
}
