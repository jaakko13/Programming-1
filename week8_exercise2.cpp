#include <iostream>
using namespace std;

void rectangular(float height, float width) {
	cout << "The area of the rectangle is " << height * width;
}

int main() {
	float height;
	float width;

	cout << "Enter the height of your rectangle:";
	cin >> height;

	cout << "Enter the width of your rectangle:";
	cin >> width;

	rectangular(height, width);
}