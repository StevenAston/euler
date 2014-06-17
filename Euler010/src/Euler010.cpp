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
	outputFile.open("primes.txt");
	long long i = 3;
	int numberOfPrimes = 0;
	int searchLimit = pow(2,30);
	int output = searchLimit/pow(2,18);
	string buffer = "";
	string writeString;
	while (i < searchLimit) {
		if (isPrime(i) == 1) {
			++numberOfPrimes;
			writeString = std::to_string(i);
			buffer.append(writeString);
			buffer.append(", ");
			if (numberOfPrimes % output == 0) {
				buffer.append("\n");
				outputFile << buffer;
				buffer = "";
				cout << i << " of " << searchLimit << " - " << ((i*100)/searchLimit) << "%\n";
			}
		}
		//if (i % == 0) {}
		i=i+2;
	}
	cout << "\n\nTotal of all primes below " << searchLimit << " = ";
	outputFile << buffer;
	outputFile.close();
	cout << "Written to file\n";
}
