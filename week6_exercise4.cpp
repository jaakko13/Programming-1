#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;



int main() {
	float num;

	cout << "Enter a number:";
	cin >> num;

	char choice;
	cout << "What do you want to do?" << endl;
	cout << "s = square root, l = logarithm, e = exponent function, t = tan, x = exit function" << endl;
	cin >> choice;

	switch (choice) {
	case 's':
		num = sqrt(num);
		cout << num;
		break;
	case 'l':
		num = log(num);
		cout << num;
		break;
	case 'e':
		float exp;
		cout << "What exponent would you like to use?";
		cin >> exp;
		num = pow(num, exp);
		cout << num;
		break;
	case 't':
		num = tan(num);
		cout << num;
		break;
	case 'x':
		exit;
		break;
	default:
		cout << "That is not a valid option." << endl;
		break;

	}

}

