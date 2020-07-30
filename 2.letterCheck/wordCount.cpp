#include <iostream>
#include <string>

using namespace std;
/*
Count number of word that doesn't contain a issue which letters can only repeated continousely.

For example, 'ab', 'a', 'abb' can be counted but 'aba', 'abca', 'ababa' cannot be counted.
*/

int main()
{
	int num, count = 0;
	int check[26];
	string word;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> word;
		fill_n(check, 26, 0); // set all alphabet to 0.
		count++; // add number of word
		for (int j = 0; j < word.length(); j++) {
			int c = word[j]; // current letter.
			if (check[c - 'a'] == 0) // check the letter is used or not.
				check[c - 'a'] = 1; // set used letter to 1.
			else if (word[j - 1] != word[j]) {// check the letter is repeated.
				count--;  // if the letter is not continuously repeated, word is not counted.
				break;
			}
		}
	}

	cout << count;
	return 0;
}
