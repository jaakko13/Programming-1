#include <iostream>
using namespace std;

int main()
{
	float capacity;
	float first;
	float second;
	float third;
	float fourth;

	cout << "What is the carrying capacity of the elevator in kg? ";
	cin >> capacity;

	cout << "What is the weight of person number 1 in kg? ";
	cin >> first;

	cout << "What is the weight of person number 2 in kg? ";
	cin >> second;

	cout << "What is the weight of person number 3 in kg? ";
	cin >> third;

	cout << "What is the weight of person number 4 in kg? ";
	cin >> fourth;

	float total = first + second + third + fourth;

	if (total > capacity) {
		cout << "Overload, do not use the elevator!";
	}else{
		cout << "Elevator at your disposal.";
	}




}