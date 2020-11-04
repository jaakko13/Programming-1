#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main() {
	cout << "These are your regular numbers." << endl;
	int i = 0;
	vector<int> regs(7);
	srand(time(NULL));
	for (i = 0; i < 7; i++) {
		int x = rand() % 39 + 1;
		regs.push_back(x);
	}
	sort(regs.begin(), regs.end());
	reverse(regs.begin(), regs.end());
	for (int i = 0; i < 7; ++i) {
		cout << regs[i] << ' ';
	}

	cout << endl << endl;
}