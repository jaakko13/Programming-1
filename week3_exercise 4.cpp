#include <iostream>
using namespace std;

void add();
void sub();
void div();
void multi();


int main() {
	char choice;
	cout << "What would you like to do?" << endl << "+ = addition, - = substraction, / = division, and * = multiplication" << endl;
	cin >> choice;

	switch (choice)
	{
	case '+':
		add();
		break;
	case '-':
		sub();
		break;
	case '/':
		div();
		break;
	case '*':
		multi();
		break;
	case default:
		cout << "That is not a valid option.";
		break;
		
	}
}

void add() {
	float number1;
	float number2;

	cout << "What is your first number?" << endl;
	cin >> number1;

	cout << "What is your second number?" << endl;
	cin >> number2;

	float total = number1 + number2;
	cout << "Addition of given numbers is " << total;

}

void sub() {
	float number1;
	float number2;

	cout << "What is your first number?" << endl;
	cin >> number1;

	cout << "What is your second number?" << endl;
	cin >> number2;

	float total = number1 - number2;
	cout << "Substraction of given numbers is " << total;

}

void div() {
	float number1;
	float number2;

	cout << "What is your first number?" << endl;
	cin >> number1;

	cout << "What is your second number?" << endl;
	cin >> number2;

	float total = number1 / number2;
	cout << "Division of given numbers is " << total;

}

void multi() {
	float number1;
	float number2;

	cout << "What is your first number?" << endl;
	cin >> number1;

	cout << "What is your second number?" << endl;
	cin >> number2;

	float total = number1 * number2;
	cout << "Multiplication of given numbers is " << total;

}
