#include <iostream>
#include <vector>
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
	int M, N, sum = 0, min = 0;
	bool prime = false, isMin = false;

	cin >> M;
	cin >> N;

	for (; M <= N; M++) {
		if (isPrime(M)) {
			if (!isMin) {
				min = M;
				isMin = true;
			}
			prime = true;
			sum += M;
		}
	}

	if(prime)
		cout << sum << "\n" << min;
	else
		cout << -1;
	return 0;
}