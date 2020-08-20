#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int rec[3];

    cin >> rec[0] >> rec[1] >> rec[2];

    while (rec[0] && rec[1] && rec[2]) {
        sort(rec, rec + 3);

        if (pow(rec[2], 2) == pow(rec[0], 2) + pow(rec[1], 2))
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";

        cin >> rec[0] >> rec[1] >> rec[2];
    }
    return 0;
}