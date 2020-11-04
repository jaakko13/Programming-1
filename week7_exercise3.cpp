#include <iostream>
#include "exc3.h"
using namespace std;



int main() {
	float dist;
	float consumption;
	float price;

	cout << "How many miles did you travel?";
	cin >> dist;

	cout << "How many gallons of gas did you use?";
	cin >> consumption;

	cout << "What is the price of gas per gallon?";
	cin >> price;

	fareprice(dist, consumption, price);
}