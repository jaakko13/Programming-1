#include <iostream>
using namespace std;

int main() {
	int time;

	cout << "How many seconds do you want printed?";
	cin >> time;

	int i = 0;
	for( i = 0; i < time; i++)
	{
		float speed = 35.316 * i;
		cout << i << "   " << speed << endl;
	}



}