#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// > descending order, < ascending order
bool comp(const pair<int, int>& arr1, const pair<int, int>& arr2) {
	if (arr1.second == arr2.second)
		return arr1.first < arr2.first;
	return arr1.second > arr2.second;
}
// memory limit is 8MB. If all input is stored, it's over the limit
int main() {
	int N, input;
	vector<int> arr;
	double avg = 0;
	int mode;
	vector<pair<int, int>> count;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> input;
		arr.push_back(input);
		avg += input;
	}

	sort(arr.begin(), arr.end());

	// using sorted array for counting
	for (int i = 0; i < N; ++i) {
		if (count.empty())
			count.push_back(make_pair(arr.at(i), 1));
		
		else if (count.back().first == arr.at(i)) {
			pair<int, int> temp = count.back();
			temp.second++;
			count.pop_back();
			count.push_back(temp);
		}

		else
			count.push_back(make_pair(arr.at(i), 1));
	}
		
	sort(count.begin(), count.end(), comp);

	avg /= N;

	mode = count.at(0).first;
	if (count.size() > 1 && count.at(0).second == count.at(1).second)
		mode = count.at(1).first;
		

	cout << round(avg) << "\n" << arr.at(N/2) << "\n" << mode << "\n" << arr.back() - arr.front();
	return 0;
}