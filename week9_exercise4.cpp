#include <iostream>
using namespace std;

void add();
void substract();
void multiply();
void divide();
void end();

float first;
float second;

int main() {
	char choice;


	cout << "Enter your first number:";
	cin >> first;
	cout << "Enter your second number:";
	cin >> second;

	cout << "What do you want to do?" << endl;
	cout << "a = add, s = substarct, m = multiply, d = divide" << endl;
	cin >> choice;

	switch (choice) {
	case 'a':
		add();
		break;
	case 's':
		substract();
		break;
	case 'm':
		multiply();
		break;
	case 'd':
		divide();
		break;
	default:
		cout << "That is not a valid option." << endl;
		break;
	}
}
	

void add() {
	float total = first + second;
	cout << "The answer is " << total << endl;

}

void substract() {
	float total = first - second;
	cout << "The answer is " << total << endl;

}

void multiply() {
	float total = first * second;
	cout << "The answer is " << total << endl;

}


void divide() {
	float total = first / second;
	cout << "The answer is " << total << endl;

}