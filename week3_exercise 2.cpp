#include <iostream>
using namespace std;

int main() {
	int i = 0;
	float arr[3];

	for (i = 0; i < 3; i++){
		cout << "Enter Number " << i + 1 << " : ";
		cin >> arr[i];
	}

	for (i = 1; i < 3; ++i)
	{
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	cout << arr[0] << " is the biggest number.";




}