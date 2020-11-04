#include <iostream>
using namespace std;

int main() {
	float jump;
	float first;
	float second;
	float third;
	float fourth;
	float fifth;

	cout << "What was the length of the jump?";
	cin >> jump;

	cout << "What score did judge 1 give?";
	cin >> first;
	cout << "What score did judge 2 give?";
	cin >> second;
	cout << "What score did judge 3 give?";
	cin >> third;
	cout << "What score did judge 4 give?";
	cin >> fourth;
	cout << "What score did judge 5 give?";
	cin >> fifth;

	float judges = first + second + third + fourth + fifth;
	float total = judges + jump * 0.9;

	cout << "The total score is " << total;


}