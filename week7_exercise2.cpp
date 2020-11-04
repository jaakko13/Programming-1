#include <iostream>
#include "exc2.h"
using namespace std;



int main() {
	float height;
	float width;

	cout << "Enter the height of your rectangle:";
	cin >> height;

	cout << "Enter the width of your rectangle:";
	cin >> width;

	rectangular(height, width);
}