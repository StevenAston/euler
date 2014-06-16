//============================================================================
// Name        : 008.cpp
// Author      : Steven Aston
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include <cstring>
#include <sstream>

string reverse (string word) {
	string reverse = string ( word.rbegin(), word.rend() );
	return reverse;
}

int palindrome (string word) {
	string rev = reverse(word);
	if (word == rev) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int a = 100;
	int b = 100;
	int c;
	int storec;
	int storea;
	int storeb;
	string s;

	while (a < 1001) {
		cout << a << "\n";
		while (b < 1001) {
			c = a * b;
			s = std::to_string(c);

			if (palindrome(s) == 1) {
				cout << a << " * " << b << " = " << c << " IS A PALINDROME!\n";
				if (c > storec) {
					storea = a;
					storeb = b;
					storec = c;
				}
			}
			++b;
		}
		++a;
		b = 100;
	}
	cout << "Largest palindrome number is " << storea << " * " << storeb << " = " << storec;
}
