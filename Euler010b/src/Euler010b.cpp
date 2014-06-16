//============================================================================
// Name        : Euler010.cpp
// Author      : Steven Aston
// Version     :
// Copyright   : 
// Description : The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//				 Find the sum of all the primes below two million.
//
//				 Answer: 142913828922
//
//============================================================================

#include <iostream>
using namespace std;
#include <cmath>

int isPrime (int num) {
	int i = 2;
	while (i < sqrt(num))
	{
		if (num % i == 0)
		{
			return 0;
		}
		++i;
	}
	return 1;
}

int main() {
	int i = 3;
	int numberOfPrimes = 0;
	int64_t total = 1;
	while (i < 2000000) {
		if (isPrime(i) == 1) {
			total=total*i;
			++numberOfPrimes;
			cout << i << " of 2,000,000 \nTotal = " << total << "\n\n";
		}
		//if (i % == 0) {}
		i=i+2;
	}
	cout << "\n\nTotal of all primes below 2,000,000 = " << total;
}
