#include <iostream>
#include <string>

using namespace std;


int dialTime(int c) {
    if (c == 'Z') {
        return 10;
    }
    else if (c == 'S') {
        return 8;
    }
    else if ((c - 'T') >= 0) { // ((c - 'A') / 3) + 3 until R b/c 7 has 4 letters
        return ((c - 'T') / 3) + 9; // T = 124. T,U,V / 3 = 0. W,X,Y / 3 = 1
    }
    else {
        return ((c - 'A') / 3) + 3; // A = 101, A,B,C / 3 = 0, D,E,F /3 = 1 ...
    }
    return 0;
}

int main() {
    string word;
    int time =0;
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        time += dialTime(word[i]);
    }
    
    cout << time;

    return 0;
}


