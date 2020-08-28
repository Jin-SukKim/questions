#include <iostream>

using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// selection sort. find index of minimun number and swap them
void sort(int arr[], int n) {
	int min_idx;
	for (int i = 0; i < n-1; ++i) {
		min_idx = i;
		for (int j = i+1; j < n; ++j) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		swap(&arr[min_idx], &arr[i]);
	}
}

int main() {
	int N;
	int num[1000];

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> num[i];
	}

	sort(num, N);

	for (int i = 0; i < N; ++i) {
		cout << num[i] << "\n";
	}

	return 0;
}