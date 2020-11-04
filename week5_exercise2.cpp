#include <iostream>
using namespace std;


int main() {
	int x;

	cout << "Enter a number:";
	cin >> x;
	int total = x;

	while (x != 0)
	{
		cout << "Enter a number:";
		cin >> x;

		total = total + x;

		if (x == 0)
		{
			cout << "The sum of all your numbers is " << total;
		}
	
	}


}