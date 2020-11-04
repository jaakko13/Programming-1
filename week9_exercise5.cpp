#include <iostream>
using namespace std;

void prime(int x) {
	int count = 0;
	int i = 0;
	if (x == 0)
	{
		cout << x << " is not prime.";
	}
	else
	{
		for ( i = 2; i < x; i++)
		{
			if (x % i == 0)
			{
				count++;
			}
		}
	}

	if (count > 1)
		cout << x << " is not prime.";
	else
	{
		cout << x << " is prime.";
	}
	{

	}
}

int main() {
	int x = 0;

	for ( x = 0; x < 1001; x++)
	{
		cout << x << endl;
		prime(x);
	}
	
}