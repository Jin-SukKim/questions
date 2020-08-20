#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    int x, y;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    // ? : same as if else
    // if x1 == x2 { x3 } else ...
    x = x1 == x2 ? x3 : (x2 == x3 ? x1 : x2);
    y = y1 == y2 ? y3 : (y2 == y3 ? y1 : y2);

    cout << x << " " << y;
    return 0;
}