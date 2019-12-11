// Lectrure10-18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void printGreeting() {
	cout << "Hope you're having a good day" << endl;
}

void divideNumbers(float x, float y) {
	if (y == 0) {
		cout << "Cannot perform division" << endl;
	}
	else {
		cout << x / y << endl;
	}
}

int factorial(int num) {
	if (num < 0) {
		return 0;
	}
	if (num == 0) {
		cout << 1;
	}
	else {
		return num * factorial(num - 1);
	}
}

void fibonacci(int N) {
	int a = 0;
	int b = 1;
	int i = 1, k;
	cout << a << " ";

	while (i < N)

	{
		cout << b << " ";
		k = b;
		b = a + b;
		a = k;
		i++;
	}
	cout << endl;

}

int main()

{
	printGreeting();
	divideNumbers(8, 7);
	divideNumbers(4, 0);
	cout << "Factorial of -1 :" << factorial(-1) << endl;
	cout << "Factorial of 0 :" << factorial(0) << endl;
	cout << "Factorial of 3 :" << factorial(3) << endl;
	fibonacci(12);

	return 0;

}