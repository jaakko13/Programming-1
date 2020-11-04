#include <iostream>
using namespace std;

void stars(int rain[12]) {
	int i = 0;
	int z = 0;
	int x = 0;
	for (z = 0; z < 12; z++)
	{
		for (x = 0; x < rain[i]; x++)
		{
			cout << "*";
		}
		cout << endl;
		i++;
	}

}



int main() {
	int i = 0;
	int rain[12];

	for ( i = 0; i < 12; i++)
	{
		cout << "How much did it rain this month?";
		cin >> rain[i];

	}
	for ( i = 0; i < 12; i++)
	{
		cout << "Input amount of rain:";
		printf("%d ", rain[i]);
		cout << endl;
	}
	stars(rain);
}