// Homewrok5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> values;
	int temp, sum = 0, largest, smallest;

	cout << "Enter an integer.";
	cin >> temp;

	while (temp != -1) {
		values.push_back(temp);
		temp = 0;
		cout << "Enter an integer.";
		cin >> temp;
	}

	//values.pop_back();
	smallest = values.back();
	largest = values.back();

	while (!(values.empty())) {
		temp = values.back();

		sum += temp;

		if (temp >= largest) {
			largest = temp;
		}

		if (temp < smallest) {
			smallest = temp;
		}
		values.pop_back();
	}

	cout << "The sum is " << sum << endl;
	cout << "The largest value is " << largest << endl;
	cout << "The smallest value is " << smallest << endl;

	return 0;
}