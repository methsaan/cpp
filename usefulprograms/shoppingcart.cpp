#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

class Customer {
	private:
		double moneyowned = 1000.00;
		int health_ = 50;
	public:
		void spend(int dollars){
			moneyowned -= dollars;
		}
		double dollarsOwned(){
			return moneyowned;
		}
		int health(){
			return health_;
		}
		void changeHealth(int amount){
			health_ += amount;
		}
};

class ShoppingCart {
	private:
		double total = 0.00;
		int numOfItems = 0;
		string items[100];
		int freq[100];
	public:
		void addToCart(string item, double price){
			items[numOfItems] = item;
			numOfItems++;
			total += price;
			int freqx = 0;
			for (int x = 0; x < numOfItems; x++){
				if (items[x] == item){
					freqx++;
				}
			}
			freq[numOfItems] = freqx;
		}
		double totalPrice(){
			return total;
		}
		double totalPricePlusTax() {
			return total+total/100*13;
		}
		double numberOfItems(){
			return numOfItems;
		}
		string itemList() {
			string itemlista = "";
			for (int x = 0; x < numOfItems; x++){
				itemlista = itemlista + items[x];
				itemlista = itemlista + "(" + to_string(freq[x+1]) + ")\n";
			}
			return itemlista;
		}
		void clear() {
			total = 0.00;
			numOfItems = 0;
			for (int x = 0; x < 100; x++){
				items[x] = "";
				freq[x] = 0;
			}
		}
};

int main(int argc, char *argv[]){
	ShoppingCart sco;
	Customer co;
	string command;
	string food;
	double price;
	char storeCommand;
	double calories;
	while ((co.dollarsOwned() > 0.00) && (co.health() > 0)) {
		cout << "Enter command (\"list\" for a list of commands): ";
		getline(cin, command);
		if (command == "quit"){
			break;
		}else if (command == "list"){
			cout << "list: list of commands\nquit: quit\ngo to store: go to store\neat: eat food\nsee health: see health (out of 100)\ngain health: gain health\n";
		}else if (command == "go to store"){
			sco.clear();
			co.changeHealth(-3);
			for (;;) {
				cout << "Type l to list options, b to buy and q to quit\n";
				storeCommand = getchar();
				if (storeCommand == 'l'){
					cout << "l: list options, q: quit, b: buy, p: print list, t: get total price\n";
				}else if (storeCommand == 'b') {
					cout << "What do you want to buy? ";
					cin >> food;
					cout << "Enter the price: ";
					cin >> price;
					sco.addToCart(food, price);
					co.spend(sco.totalPrice());
				}else if (storeCommand == 'p'){
					cout << sco.itemList() << endl;
				}else if (storeCommand == 't'){
					cout << sco.totalPricePlusTax() << endl;
				}else if (storeCommand == 'q'){
					cout << "Leaving Food Store ...\n";
					break;
				}
				getchar();
			}
			getchar();
		}else if (command == "eat"){
			cout << "How many kilograms of food do you want to eat? ";
			cin >> calories;
			cout << "storing energy ...\n";
			cout << "You gained " << calories << " calories" << endl;
		}else {
			cout << "No such command\n";
		}
	}
}
