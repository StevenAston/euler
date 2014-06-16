//============================================================================
// Name        : 010.cpp
// Author      : Steven Aston
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <cmath>

int main() {
	int upperBound = 100;
	int list[upperBound];
	int i = 1;
	int sumSquare = 0;
	int squareSum = 0;
	int difference;
	while (i <= upperBound) {
		squareSum+=i;
		list[i] = pow(i,2);
		cout << sumSquare << " + " << list[i] << " =\n";
		sumSquare+=list[i];
		++i;
	}
	squareSum = pow(squareSum,2);

	difference = squareSum - sumSquare;

	cout << difference;

	//cout << "= " << sumSquare << "\n";
	//cout << squareSum;
}
