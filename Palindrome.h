#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Palindrome {
public: 
	int letters[26];
	string input;
	string palin = "";
	string rev = "";
	string final = "";
	string center = "";

	void ReadIn() {
		cin >> input;
		int length = input.length();
		for (int i = 0; i < length; i++) {
			int temp = input[i];
			letters[temp - 97]++;
		}
	}

	void Check() {
		for (int i = 0; i < 26; i++) {
			while (letters[i] > 0)
			{
				if (letters[i] % 2 == 0) {
					palin += static_cast<char>(i + 97);
					letters[i] /= 2;
					if (letters[i] == 1) {
						break;
					}
				}
				else if (letters[i] > 2 && letters[i] % 2 == 1) {
					palin += static_cast<char>(i + 97);
					letters[i] -= 2;
				}
				else {
					center = static_cast<char>(i + 97);
					letters[i]--;
				}
			}
		}
	}

	void Reverse() {
		for (int i = palin.length(); i > 0; i--) {
			rev += palin[i - 1];
		}
	}

	void Print() {
		final = palin + center + rev;
		cout << final << endl;
	}
};