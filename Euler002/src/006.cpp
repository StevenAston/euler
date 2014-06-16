//============================================================================
// Name        : 006.cpp
// Author      : Steven Aston
// Version     :
// Copyright   : 
// Description : Sum of all even fiobinnacci numbers under 400000
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int b = 1;
	int c;
	int sum = 0;
	while (b < 4000000) {
		if (b % 2 == 0) {
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	cout << sum;
}
