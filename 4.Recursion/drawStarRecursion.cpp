#include <iostream>

using namespace std;

void drawStar(int n, int x, int y) {
    if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
        cout << " ";
    else {
        if (n / 3 == 0)
            cout << "*";
        else
            drawStar(n / 3, x, y);
    }
} 
/*  
    3:          9:
        ***         *********
        * *         * ** ** *        
        ***         *********         
                    ***   ***
                    * *   * *
                    ***   ***
                    *********
                    * ** ** *
                    *********     
*/
int main() {
    int n;

    cin >> n;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            drawStar(n, x, y);
        }
        cout << "\n";
    }

    return 0;
}