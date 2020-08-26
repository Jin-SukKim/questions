#include <iostream>

using namespace std;

int main() {
	int N, M, sum = 0, ans = 0;
	//initializing method
	// {0,} : to all same num
	// for loop, fill_n(), memset()
	int card[100] = { 0, };
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		cin >> card[i];

	// i = 1, j = i++ -> i = 2, j = 1, return value and increment
	// i = 1, j = ++i -> i = 2, j = 2, increment and return value
	for (int i = 0; i < N-2; ++i) {
		for (int j = ++i; j < N-1; ++j) {
			for (int k = ++j; k < N; ++k) {
				sum = card[i] + card[j] + card[k];
				if (sum <= M && sum > ans) 
					ans = sum;
			}
		}
	}
	cout << ans;
	return 0;
}