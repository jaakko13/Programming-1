#include <iostream>
using namespace std;

void setAge(string name, int age) {
	
	cout << "Your name is " << name << " and your age is " << age << ".";
}

int main() { 
	int age;
	string name;

	cout << "What is your name?";
	cin >> name;
	cout << "What is your age?";
	cin >> age;

	setAge(name, age);

}