// I pledge my honor that I have abided by the Stevens Honor System
// Credit; Christian Diesen

#include <iostream>
#include <math.h>
using namespace std;
class vendingMachine {
public:
	float money;
	int sprite;
	int water;
	int coke;
	int dietCoke;
	float spriteprice = 1.50;
	float waterprice = 1.00;
	float cokeprice = 1.75;
	float dietcokeprice = 1.75;



	vendingMachine() {
		sprite = 5;
		water = 5;
		coke = 5;
		dietCoke = 5;
	}
	void dispenseS() {
		if (money >= spriteprice) {
			if (sprite == 0) {
				cout << "Your Money Has Been Refunded; No More in Sock" << endl;
			}
			else {
				cout << "want a sprite cranberry?" << endl;
				sprite--;
				money = money - spriteprice;
			}

		}
		else {
			cout << " Your Money Has Been Refunded" << endl;
			return;
		}

	}
	void dispenseW() {
		if (money >= waterprice) {
			if (water == 0) {
				cout << "Your Money Has Been Refunded; No More in Stock" << endl;
			}
			else {
				cout << "Enjoy Your Water" << endl;
				water--;
				money = money - waterprice;
			}

		}
		else {
			cout << "Your Money Has Been Refunded" << endl;
			return;
		}

	}
	void dispenseC() {
		if (money >= cokeprice) {
			if (coke == 0) {
				cout << "Your Money Has Been Refunded; No More in Stock" << endl;
			}
			else {
				cout << "bold choice" << endl;
				coke--;
				money = money - cokeprice;
			}

		}
		else {
			cout << "Your Money Has Been Refunded" << endl;
			return;
		}

	}
	void dispenseDC() {
		if (money >= dietcokeprice) {
			if (dietCoke == 0) {
				cout << "Your Money Has Been Refunded; No More in Stock" << endl;
			}
			else {
				cout << "how is this stuff diet?" << endl;
				dietCoke--;
				money = money - dietcokeprice;
			}

		}
		else {
			cout << "Your Money Has Been Refunded" << endl;
			return;
		}

	}

};
int main() {

	string selection;
	vendingMachine myVar;
	cout << "Select Your Item" << endl;
	cout << "X1 - Cola Cola                 " << "X2 - Diet Coke" << endl;
	cout << "Y1 - Water                     " << "Y2 - Sprite" << endl;
	cin >> selection;
	if (selection == "X1") {
		cout << "price is; " << myVar.cokeprice << endl;
		cout << "Insert Money" << endl;
		cin >> myVar.money;
		myVar.dispenseC();
		cout << "Change Is; " << myVar.money << endl;
	}
	else if (selection == "X2") {
		cout << "Price is; " << myVar.dietcokeprice << endl;
		cout << "Insert Money" << endl;
		cin >> myVar.money;
		myVar.dispenseDC();
		cout << "Change Is; " << myVar.money << endl;
	}
	else if (selection == "Y1") {
		cout << "price is; " << myVar.waterprice << endl;
		cout << "Insert Money" << endl;
		cin >> myVar.money;
		myVar.dispenseW();
		cout << "Change Is; " << myVar.money << endl;

	}
	else if (selection == "Y2") {
		cout << "price is; " << myVar.spriteprice << endl;
		cout << "Insert Money" << endl;
		cin >> myVar.money;
		myVar.dispenseS();
		cout << "Change Is; " << myVar.money << endl;

	}
	else {
		cout << "Please Use a Valid Selection" << endl;
		return 1;

	}
	return myVar.money;
}