#include <iostream>
#include <cstdio>

using namespace std;

// counting sort
void sort(int arr[], int N) {
	int count[1000] = { 0, };
	int temp[1000];

	for (int i = 1; i <= N; ++i) {
		count[arr[i]]++;
	}

	// get frequency to find index of number in sorted array
	for (int i = 1; i <= N; ++i) {
		count[i] = count[i - 1] + count[i];
	}

	// sorting the array from end point
	for (int i = N; i > 0; --i) {
		temp[count[arr[i]]] = arr[i];
		count[arr[i]]--;
	}

	// copy sorted array to origin
	for (int i = 1; i <= N; ++i)
		arr[i] = temp[i];
}
// memory limit is 8MB. If all input is stored, it's over the limit
int main() {
	int N = 0, idx = 0;
	int arr[10001] = {0};

	scanf("%d", &N);

	for (int i = 1; i <= N; ++i) {
		scanf("%d", &idx);
		arr[idx]++;
	}

	// cin, cout is slower than scanf, printf
	// "\n" is faster than endl
	int i = 1;
	while (i < 10001) {
		if (arr[i] > 0) {
			printf("%d \n", i);
			--arr[i];
		}
		else
			++i;
	}
	
	//sort(num, length);

	return 0;
}