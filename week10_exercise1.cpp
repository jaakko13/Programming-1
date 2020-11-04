#include <iostream>
#include <ctime>
using namespace std;

int main() {

	int faces;
	int times;
	int i = 0;

	cout << "How many faces should the die have?";
	cin >> faces;

	cout << "How many times should the die be thrown?";
	cin >> times;
	srand(time(NULL));

	while (i < times)
	{
		cout << rand() % faces + 1 << endl;
		i++;
	}



}