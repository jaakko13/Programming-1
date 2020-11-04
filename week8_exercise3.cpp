#include <iostream>
#include "exc3.h"
using namespace std;

int main() {
	float voltage;
	float resistance;

	cout << "What is the Voltage?";
	cin >> voltage;

	cout << "What is the resistance?";
	cin >> resistance;

	curr(voltage, resistance);


}