#include <iostream>
#include <vector>
using namespace std;

void end();
void add();
void find(string name[20], string number[20]);
int i = 0;

int main(string name[20], string number[20]) {
	char choice;
	bool running = true;

	while (running)
	{
		cout << "What do you want to do?" << endl;
		cout << "a = add a contact, f = find a contact, e = exit function" << endl;
		cin >> choice;

		switch (choice) {
		case 'a':
			add();
			break;
		case 'f':
			find(name, number);
			break;
		case 'e':
			end();
			break;
		default:
			cout << "That is not a valid option." << endl;
			break;
		}
	}

}

void add() {
	string name[20];
	string number[20];
	int i;

	cout << "Which entry number is this?";
	cin >> i;

	cout << "Enter name:";
	cin >> name[i];

	cout << "Enter phone number:";
	cin >> number[i];
	

	main(name, number);
}

void find(string name[20], string number[20]){
	int y;
	int i = 0;

	cout << "How many names do you want to display?";
	cin >> y;

	for (i = 0; i < y; i++)
	{
		cout << "Name: " << name[i] << endl << " Phone number:" << number[i] << endl << endl;
	}
}

void end() {
	exit(0);
}