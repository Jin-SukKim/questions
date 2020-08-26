#include <iostream>

using namespace std;

/* Function to get sum of digits */
int getSum(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main() {
	int N, count = 0;

	cin >> N;

	for (int i = N; i > 0; i /= 10) {
		count++;
	}

	for (int i = N - count * 9; i <= N; i++) {
		if (N == i + getSum(i)) {
			cout << i;
			return 0;
		}

	}
	cout << 0;

	return 0;
}