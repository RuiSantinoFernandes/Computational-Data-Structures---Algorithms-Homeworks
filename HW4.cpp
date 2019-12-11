

#include <iostream>
#include <string>

using namespace std;


int main() {
	float homework = 0.0;
	//float _hwscore;

	float midterm = 0.0;
	//int _midtermscore;

	float final_ = 0.0;
	//int _finalscore;

	int _finalgrade;


	for (int i = 0; i < 6; i++) {

		cout << "Homework Grade" << i + 1 << "- ";
		float temp = 0.0;
		cin >> temp;
		homework += temp;
	}

	homework /= 6.0;
	cout << homework;

	cout << endl;

	for (int i = 0; i < 2; i++) {
		float temp = 0.0;
		cout << "Midterm Grade 1 - ";
		cin >> temp;
		midterm += temp;
	}
	midterm /= 2.0;

	cout << midterm << endl;

	cout << "Final Grade 1 - ";
	cin >> final_;

	cout << final_ << endl;


	_finalgrade = 0.4 * homework + 0.4 * midterm + 0.2 * final_;

	cout << "Final Grade- " << _finalgrade << endl;

	//int _hwscore, _midtermscore, _finalscore;
	//int finalgrade;

	//cin >> _hwscore >> _midtermscore >> _finalscore;

	if (_finalgrade >= 91) {
		cout << "The Course grade is: A";
	}

	else if (_finalgrade >= 81) {
		cout << "The Course grade is: B";
	}

	else if (_finalgrade >= 71) {
		cout << "The Course grade is: C";
	}

	else {
		cout << "The Course grade is: F";
	}

	return 0;
}
