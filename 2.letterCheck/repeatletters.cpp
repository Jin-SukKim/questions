#include <iostream>
#include <string>

using namespace std;

int main() {
    int T, R;
    string tCase;

    cin >> T;
    
    for (int i = 0; i < T; i++) {

        //get multiple inputs on same line
        cin >> R >> tCase;

        for (int j = 0; j < tCase.length(); j++) {
            for (int h = 0; h < R; h++) {
                //string.at(n) is slower but it prints exceptions when it's printed outranged element. operator[] is faster but only print string element.
                cout << tCase[j];
            }
        }
        cout << endl;
    }
    return 0;
}

