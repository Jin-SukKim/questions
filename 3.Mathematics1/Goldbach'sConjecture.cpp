#include <iostream>
#include <cstring>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main() {
    int T, n;

    cin >> T;

    while (T--) {
        cin >> n;

        int j;
        for (int i = n / 2; i <= n; i++) {
            //j + i = n
            j = n - i; 
            if (isPrime(i) && isPrime(j)) {
                cout << j << " " << i << "\n";
                break;
            }
        }
    }
    return 0;
}