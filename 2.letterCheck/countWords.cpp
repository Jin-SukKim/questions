#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    int count = 0;
    bool space = true;
    
    getline(cin, sentence);

    for(int i = 0; i < sentence.length(); i++) {
        if (isspace(sentence[i]))
            space = true;
        else if(space) {
            count++;
            space = false;
        }
    }

    cout << count;
    return 0;
}

