#include <iostream>
using namespace std;

int main() {
	float income;

	cout << "What is your income?";
	cin >> income;

	float community = income * 0.1975;
	cout << "You pay " << community << " euros in community tax." << endl;

	if (income >= 16900 && income < 25300) {
		float govtax = income * 0.0625;
		cout << "You pay " << govtax << " in government income tax." << endl;
		float total = community + govtax;
		cout << "Your total tax amount is " << total << ".";
	}
	else if (income >= 25300 && income < 41200) {
		float govtax = income * 0.175;
		cout << "You pay " << govtax << " in government income tax." << endl;
		float total = community + govtax;
		cout << "Your total tax amount is " << total << ".";
	}
	else if (income >= 41200 && income < 73100) {
		float govtax = income * 0.215;
		cout << "You pay " << govtax << " in government income tax." << endl;
		float total = community + govtax;
		cout << "Your total tax amount is " << total << ".";
	}
	else if (income > 73100) {
		float govtax = income * 0.315;
		cout << "You pay " << govtax << " in government income tax." << endl;
		float total = community + govtax;
		cout << "Your total tax amount is " << total << ".";
	}
	

}