//============================================================================
// Name        : 011.cpp
// Author      : Steven Aston
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int isPrime (int num) {
	int i = 2;
	while (i < (num/2)) {
		if (num % i == 0) {
			return 0;
		}
		if (num == 4) {
			return 0;
		}
		++i;
	}
	return 1;
}

int main() {
	int searchNumber = 10002;
	int primesFound = 0;
	int primes[searchNumber];
	int i = 2;
	while (primesFound < searchNumber) {
		if (isPrime(i) == 1) {
			primes[primesFound] = i;
			++primesFound;
			cout << "Found " << primesFound << " primes = " << primes[primesFound-1] << "\n";
		}
		++i;
	}
}
