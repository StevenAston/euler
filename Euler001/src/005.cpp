#include <iostream>
using namespace std;

int main() {
	int i = 1;
	int total = 0;
	while (i < 1000) {
		if (i % 3 == 0) {
			cout << i << " + " << total << " = " << total + i << "\n";
			total+=i;
		}
		else if (i % 5 == 0) {
			cout << i << " + " << total << " = " << total + i << "\n";
			total+=i;
		}
		else {
			cout << i << "\n";
		}
		++i;
	}
}
