#include <iostream>
using namespace std;

int main() {
	float weight;

	cout << "What is the weight of the letter in grams?" << endl;
	cin >> weight;

	if (weight <= 50) {
		cout << "It costs 0,60 euros to send this letter domestically.";
	}
	else if (weight >= 50 && weight <= 100) {
		cout << "It costs 0,90 euros to send this letter domestically.";
	}
	else if (weight >= 100 && weight <= 250) {
		cout << "It costs 1,30 euros to send this letter domestically.";
	}
	else if (weight >= 250 && weight <= 500) {
		cout << "It costs 2,10 euros to send this letter domestically.";
	}
	else if (weight >= 500 && weight <= 1000) {
		cout << "It costs 3,50 euros to send this letter domestically.";
	}
	else if (weight >= 1000){
		cout << "It costs 5,50 euros to send this letter domestically.";
	}
}