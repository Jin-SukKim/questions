#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int alphabet[26];
    memset(alphabet, -1, sizeof(int)*26);

    char word[101]; // lower case alphabet start from 97 to 122 in ascii table
    cin >> word;

    int ascii;

    for(int i = 0; i < 100; i++) {
        ascii = (int)word[i];
        if(96 < ascii && ascii < 123) {
            if(alphabet[ascii - 97] == -1) {
                alphabet[ascii - 97] = i;
            }
        }
        else
            break;
    }

    for(int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    return 0;
}