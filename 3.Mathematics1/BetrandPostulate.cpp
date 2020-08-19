#include <iostream>
#include <cstring>

using namespace std;

int prime[246913];

int main() {
    int n, n2, count = 0;

    prime[0] = prime[1] = 1; // 0 and 1 is not prime

    cin >> n;

    while (n) {
        n2 = n * 2;
        n++;
        //Eratostnes seive
        //already non prime numbers are checked. NO need to reset to all 0 to prime array.
        for (int i = 2; i * i <= n2; i++) {
            if (prime[i] == 0) {
                for (int j = i * i; j <= n2; j += i)
                    prime[j] = 1;
            }
        }
        for (; n <= n2; n++) {
            if (prime[n] == 0) 
                    count++;
        }
        cout << count << "\n";
        count = 0;
        cin >> n;
    }

    return 0;
}