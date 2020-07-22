#include <iostream>
#include <string>

using namespace std;

int main() {
    int int1, int2, rev1 = 0, rev2 = 0;
    cin >> int1 >> int2;

    for (int i = 0; i < 3; i++) {
        int remainder1 = int1%10, remainder2 = int2%10;
        rev1 = rev1 * 10 + remainder1;
        rev2 = rev2 * 10 + remainder2;
        int1 /= 10;
        int2 /= 10;
    }

    if (rev1 > rev2) {
        cout << rev1;
    }
    else if (rev2 > rev1) {
        cout << rev2;
    }

    return 0;
}

