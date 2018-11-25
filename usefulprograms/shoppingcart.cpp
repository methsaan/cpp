#include <iostream>
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
		void reduceHealth(int amount){
			health_ -= amount;
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
				itemlista = itemlista + "(" + to_string(freq[x+1]) + ")\t";
			}
			return itemlista;
		}
};

int main(int argc, char *argv[]){
	ShoppingCart sco;
	Customer co;
	string command;
	string food;
	double price;
	while (co.dollarsOwned() > 0.00){
		cout << "Enter command (\"list\" for a list of commands): ";
		getline(cin, command);
		if (command == ""){
			break;
		}else if (command == "list"){
			cout << "list: list of commands\n: quit\ngo to store: go to store\neat: eat food\nsee health: see health (out of 100)\ngain health: gain health\n";
		}else if (command == "go to store"){
			cout << "Enter b to buy and q to quit\n";
			if (getchar() == 'b'){
				cout << "What do you want to buy? ('q' to quit) ";
				cin >> food;
				cout << "Enter the price: ";
				cin >> price;
				sco.addToCart(food, price);
			}else {
				cout << "items: " << sco.itemList() << endl;
			}
		}else {
			cout << "No such command\n";
		}
	}
}
