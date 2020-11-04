#include <iostream>
using namespace std;

int main() {

	int i = 0;
	int score[5];

	for ( i = 0; i < 5; i++)
	{
		cout << "What was the score of the dart?";
		cin >> score[i];
	}

	for ( i = 1; i < 5; i++)
	{
		if (score[0] < score[i])
		{
			score[0] = score[i];
		}
		
	}
	cout << "The largest element is " << score[0];
}