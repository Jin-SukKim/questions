#include <iostream>

using namespace std;

// Merge two subarray
void merge(int arr[], int l, int m, int r) {
	int temp[1000000];

	int i = l, k = l, j = m + 1;

	// merge two subarray after compare and sort 
	while (i <= m && j <= r) {
		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			++i;
			++k;
		}
		else {
			temp[k] = arr[j];
			++j;
			++k;
		}
	}
	// remaining left
	while (i <= m) {
		temp[k] = arr[i];
		++i;
		++k;
	}
	// remaining right
	while (j <= r) {
		temp[k] = arr[j];
		++j;
		++k;
	}
	
	// at this point, k is last index + 1
	for (i = l; i < k; i++) {
		arr[i] = temp[i];
	}
 }

// merge sort, l = left (first index), r = right (last index), m = middle
// working like tail recursion
void sort(int arr[], int l, int r) {
	if (l < r) {
		int m = (l + r) / 2;

		sort(arr, l, m);
		sort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

int main() {
	int N;
	int num[1000000];
	//int num_size = sizeof(num) / sizeof(num[0]);

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> num[i];
	}

	sort(num, 0, N-1);

	for (int i = 0; i < N; ++i) {
		cout << num[i] << "\n";
	}

	return 0;
}