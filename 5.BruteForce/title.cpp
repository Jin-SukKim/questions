#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, count = 0;
	int end = 665;
	string title;

	cin >> N;

	while (++end) {
		title = to_string(end);

		if (title.find("666") != string::npos)
			++count;

		if (count == N)
			break;
	}
	
	cout << title;
	return 0;
}