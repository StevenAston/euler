//============================================================================
// Name        : Euler010.cpp
// Author      : Steven Aston
// Version     :
// Copyright   : 
// Description : The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//				 Find the product of all the primes below two million.
//
//				 Answer is about 849,000 digits
//
//============================================================================

#include <iostream>
using namespace std;
#include <cmath>
#include <iostream>
#include <fstream>
#include "InfInt.h"

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
	ofstream outputFile;
	outputFile.open("primesum.txt");

	int i = 3;
	int numberOfPrimes = 0;
	int output = 32;
	InfInt total = 1;
	while (i < 2000000) {
		if (isPrime(i) == 1) {
			total=total*i;
			++numberOfPrimes;
			if (numberOfPrimes % output == 0) {
				cout << i << " of 2,000,000\n";
			}
		}
		//if (i % == 0) {}
		i=i+2;
	}
	cout << "\n\nTotal of all primes below 2,000,000 = " << total;
	outputFile << total;
	outputFile.close();
	cout << "Written to file";
}
