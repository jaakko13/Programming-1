#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;

	cout << "Give your first number: ";
		cin >> x;
	cout << "Give your second number: ";
		cin >> y;

		int sub = x - y;
		int mult = x * y;


		cout << "Substraction of those numbers is " << sub << endl;
		cout << "Product of those number is " << mult;

}