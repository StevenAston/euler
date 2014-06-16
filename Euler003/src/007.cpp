//============================================================================
// Name        : 007.cpp
// Author      : Steven Aston
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <math.h>

int isPrime (double number) {
	double i;
	for (i=2; i*i<=number; i++) {
	        if (fmod(number, i) == 0) return 0;
	    }
	return 1;
}

int main() {
	double factnum = 600851475143;
	double fact = 1;
	while (fact < factnum/2) {
		if (fmod(factnum, fact) == 0) {
			if (isPrime(fact) == 1) {
				cout << fact << " is prime.\n";
			} else {
			cout << fact << "\n";
			}
		}
		++fact;
	}
}
