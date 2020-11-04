#include <iostream>
using namespace std;

int main() {

	float height;
	float weight;

	cout << "What is your height in meters?";
	cin >> height;

	cout << "What is your weight in kilograms?";
	cin >> weight;

	float index = weight / (height * height);

	if (index <= 20.7) {
		cout << "You are underweight.";
	}
	else if (index > 20.7 && index <= 26.4) {
		cout << "You are normal weight.";
	}
	else if (index > 26.4 && index <= 27.8) {
		cout << "You ate slightly overweight.";
	}
	else if (index > 27.8 && index <= 31.1) {
		cout << "You are overweight.";
	}
	else if (index > 31.1) {
		cout << "You are obese.";
	}
}