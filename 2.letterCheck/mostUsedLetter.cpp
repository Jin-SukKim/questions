#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;
    pair<int, int> count[26];
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        int letter = tolower(word[i]) - 'a';
        count[letter].first++;
        count[letter].second = letter;
    }

    sort(count, count + 26);  //sorting pair array
    if (count[25].first == count[24].first) {
        cout << "?";
        return 0;
    }
    cout << (char)(count[25].second + 'A');

    return 0;
}

