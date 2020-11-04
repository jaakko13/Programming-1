#include <iostream>
#include <numeric>
using namespace std;

int main() {
	int score[10];
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		cout << "Enter a score:";
		cin >> score[i];
	}
	
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", score[i]);
	}

	cout << endl;
	int total = accumulate(score, score + 10, 0);
	cout << "The total of the scores is " << total << endl;

	float average = total / 10;

	cout << "The average of the scores is " << average;





}