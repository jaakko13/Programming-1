#include <iostream>
using namespace std;

void celsius();
void fah();


int main() {
	char choice;
	bool running = true;

	while (running) {
		cout << "Set unit (c=celsius, f=fahrenheit, e=exit)" << endl;
		cin >> choice;
		{
			switch (choice)
			{
			case 'c':
				celsius();
				break;
			case 'f':
				fah();
				break;
			case 'e':
				return 0;
				break;
			default:
				break;
			}
		}
	}
}

void celsius() {
	float temp;

	cout << "What is your temperature in fahrenheit?";
	cin >> temp;

	float newtemp = (temp - 32) * 0.55;

	cout << "Your temperaure in clesius is " << newtemp << " degrees." << endl;

}

void fah() {
	float temp;

	cout << "What is your temperature in celsius?";
	cin >> temp;

	float newtemp = (temp * 1.8) + 32;

	cout << "Your temperaure in fahrenheit is " << newtemp << " degrees." << endl;


}