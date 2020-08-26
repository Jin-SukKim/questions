#include <iostream>

using namespace std;

int main() {
	int N, x, y, rank = 1;
	pair<int, int> person[50];

	cin >> N;

	for (int i = 0;i < N; ++i) {
		cin >> x >> y;
		person[i] = make_pair(x, y);
	}

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (person[i].first < person[j].first
				&& person[i].second < person[j].second)
				++rank;
		}
		cout << rank << "\n";
		rank = 1;
	}
	return 0;
}