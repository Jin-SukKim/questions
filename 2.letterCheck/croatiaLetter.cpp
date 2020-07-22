#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;

    cin >> word;
    int count = word.length();
    
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == '=') {
            if (word[i - 1] == 'c' || word[i - 1] == 's') {
                count--;
            }
            else if (word[i - 1] == 'z') {
                if (i > 1 && word[i - 2] == 'd')
                    count -= 2;
                else
                    count--;
            }
        }
        else if (word[i] == '-') {
            if (word[i - 1] == 'c' || word[i - 1] == 'd')
                count--;
        }
        else if (word[i] == 'j') {
            if (word[i - 1] == 'l' || word[i - 1] == 'n')
                count--;
        }
    }

    cout << count;

    return 0;
}