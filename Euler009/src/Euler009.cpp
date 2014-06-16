//============================================================================
// Name        : Euler009.cpp
// Author      : Steven Aston
// Version     :
// Copyright   : 
// Description : A Pythagorean triplet is a set of three natural numbers, a < b < c, for which a2 + b2 = c2
//
//				 For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//				 There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//				 Find the product abc.
//
//				200+375+425=1000
//
//============================================================================

#include <iostream>
using namespace std;
#include <cmath>

int main() {
	int a = 3;
	int b = 4;
	int c = 5;
	while (a < 1000) {
		while (b < 1000) {
			c = sqrt(pow(a,2) + pow(b,2));
			if (pow(a,2) + pow(b,2) == pow(c,2)) {
				if (a + b + c == 1000) {
					cout << "SUCCESS! Pythagorean triplet totalling 100 found! " << a << " + " << b << " = " << c << " \n";
				}
			}
			++b;
		}
		b=a+1;
		++a;
	}
}
