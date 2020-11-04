#include <iostream>
using namespace std;

int main() {
	bool run = true;
	int times;
	int b = 0;

	int c = 0;

	while (c < 16) {
		cout << c << " ";
		++c;
	}
	cout << endl;

	while (run) {
		cout << "How many times do you want to print 'Hello World'?";
		cin >> times;
		b = 0;

		while (b < times) {
			cout << "Hello World" << endl;
			++b;
		}
	}
}