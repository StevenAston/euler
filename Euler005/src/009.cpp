//============================================================================
// Name        : 009.cpp
// Author      : Steven Aston
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int div10 (int num) {
	int i = 1;
	while (i < 20) {
		if (num % i != 0) {
			//cout << "Not Divisible by 1-20";
			return 1;
		}
		++i;
	}
	cout << "Divisible by 1-20";
	return 0;
}

int main() {
	int num = 10;
	while ((div10(num) == 1) && (num < 479001600)) {
		if (div10(num) == 1) {
			if (num % 1000 == 0) {
				cout << num << " No good.\n";
			}
		}
		++num;
	}
	cout << num << " IS A HIT!";
}
