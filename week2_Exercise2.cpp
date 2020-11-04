#include <iostream>
using namespace std;

int main()
{
	float amount;
	float interest;
	float time;

	cout << "What is the amount of the loan? ";
	cin >> amount;

	cout << "What is the interest rate of the loan? ";
	cin >> interest;

	cout << "What is the time of the loan? ";
	cin >> time;

	float realint = interest / 100;
	float total = amount * realint * time;

	cout << "The amount of interest during loan time: " << total << " euros.";






}