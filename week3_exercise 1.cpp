#include <iostream>
using namespace std;

void petrol();
void diesel();


int main() {
	cout << "Would you like to calculate for petrol or diesel? p = petrol and d = diesel." << endl;
	char choice;
	cin >> choice;

	switch (choice)
	{
	case 'p':
		petrol();
		break;
	case 'd':
		diesel();
		break;
	case default:
		cout << "This is not a valid option.";
		break;
	}
}


void petrol() {
	float price;
	float consumption;
	float kilom;

	cout << "What is the price of petrol?";
	cin >> price;

	cout << "What is your cars petrol consumption(liters/100km)?";
	cin >> consumption;

	cout << "How many kilometers do you drive each year?";
	cin >> kilom;

	float total = price * consumption * kilom;

	cout << "Cost of petrol car per year: " << total;



}


void diesel() {
	float price;
	float consumption;
	float kilom;
	float tax;

	cout << "What is the price of diesel?";
	cin >> price;

	cout << "What is your cars diesel consumption(liters/100km)?";
	cin >> consumption;

	cout << "How many kilometers do you drive each year?";
	cin >> kilom;

	cout << "How much is the current diesel tax?";
	cin >> tax;


	float trueprice = (price * tax) + price;
	float total =  price * kilom * consumption;

	cout << "Cost of petrol car per year: " << total;


}
