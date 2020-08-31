#include <iostream>
#include <string>

using namespace std;

void merge(int arr[], int l, int m, int r, int length) {
	int i = l;
	int k = l;
	int j = m + 1;

	int* temp = new int[length];

	// sort in descending order by comparing two left right num
	while (i <= m && j <= r) {
		// x++, x is assign to array first and add +1 word
		temp[k++] = arr[i] > arr[j] ? arr[i++] : arr[j++];
	}

	// copy remaining left
	while (i <= m)
		temp[k++] = arr[i++];

	// copy remaining right
	while (j <= r) 
		temp[k++] = arr[j++];

	for (i = l; i < k; ++i)
		arr[i] = temp[i];

	delete[] temp;
}

// pointer array address, call by reference
void mergeSort(int* (&arr), int l, int r, int length) {
	if (l < r) {
		int m = (l + r) / 2;

		mergeSort(arr, l, m, length);
		mergeSort(arr, m + 1, r, length);

		merge(arr, l, m, r, length);
	}
}

void arraySolution(string& num) {
	int length = num.length();
	int* arr = new int[length]; // dynamic array initialize

	for (int i = 0; i < length; ++i) {
		arr[i] = num[i] - '0'; // convert char to int
	}

	mergeSort(arr, 0, length - 1, length);

	for (int i = 0; i < length; ++i) {
		cout << arr[i];
	}

	delete[] arr; // delete for memory space
}

// get large number as user input which can occur memory overflow
int main() {
	string num;

	cin >> num;
	arraySolution(num);

	return 0;
}