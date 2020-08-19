#include <iostream>
#include <cstring>

using namespace std;

//if prime is initialized in main(), it causes stack overflow error
//b/c VS's heap memory limit is very small. Better change limit setting to 1024*1024*256
//that regural memory limit is 256MB. Project - [File] properties - linker - system.
int prime[1000001];

int main() {
    int M, N;

    cin >> M >> N;

    prime[0] = prime[1] = 1; // 0 and 1 is not prime

    //find first prime and multiples of primes are not prime
    //ex) 2 is prime but 2*2 = 4 is not prime
    for (int i = 2; i * i <= N; i++) {
        if (prime[i] == 0) {
             for (int j = i * i; j <= N; j += i)
                prime[j] = 1;
        }
    }

    for (; M <= N; M++) {
        if (prime[M] == 0)
            cout << M << "\n"; // endl flushes the buffer and 'n doesn't. endl is slower than \n 
    }

    return 0;
}