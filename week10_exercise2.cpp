#include <iostream>
#include <ctime>
using namespace std;

void lotterynumbers(int nums[5]);

int main() {
	int nums[5];
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		cout << "Enter a number into the array:";
		cin >> nums[i];
	}

	lotterynumbers(nums);
}

void lotterynumbers(int nums[5]) {

	srand(time(NULL));
	int i = rand() % 5;
	printf("%d ", nums[i]);
	

}