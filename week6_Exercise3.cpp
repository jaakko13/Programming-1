#include <iostream>
#include <string>
using namespace std;


int main() {
	string first;
	string last;
	string street;
	string post;
	string city;

	cout << "What is your first name?";
	cin >> first;
	cout << "What is your last name?";
	cin >> last;
	cout << "What is the name of your street?";
	cin >> street;
	cout << "What is your postal code?";
	cin >> post;
	cout << "What is the name of your city?";
	cin >> city;

	cout << first << " " << last << ", your address is" << street << " " << post << " " << city << endl << endl;




	string f;
	string s;

	cout << "Write a name.";
	cin >> f;

	cout << "Write another name.";
	cin >> s;
	if (f.length() > s.length())
	{
		cout << f << " is longer";
	}
	else if (s.length() > f.length())
	{
		cout << s << " is longer";
	}
	else if (s.length() == f.length())
	{
		cout << f << " and " << s << " are the same length";
	}
	
	cout << endl << endl;

	if (f.compare(s) < 0)
	{
		cout << f << " is first alphabetically.";
	}
	else if (s.compare(f) < 0)
	{
		cout << s << " is first alphabetically.";
	}
	
}