#include <iostream>
#include <math.h>

using namespace std;

void print(int n) {
    cout << n << "\n";
}

int main() {
    int T, x1, y1, x2, y2, r1, r2, d, cond1, cond2;

    cin >> T;

    while (T--) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        //instead of using sqrt, using pow to r1, and r2 b/c of using int.
        d = pow(x1 - x2, 2) + pow(y1 - y2, 2);
        
        cond1 = pow(r1 - r2, 2);
        cond2 = pow(r1 + r2, 2);

        if (d == 0) {
            if (r1 == r2)
                print(-1);
            else
                print(0);
        }
        else if (cond1 == d || cond2 == d)
            print(1);
        else if (cond1 < d && d < cond2)
            print(2);
        else
            print(0);
    }

    return 0;
}