#include <iostream>

using namespace std;

int main() {
	int a, b, v, days = 0;

	cin >> a >> b >> v;

	if ((v - b) % (a - b) == 0)
		days = (v - b) / (a - b);
	else
		days = (v - b) / (a - b) + 1;

	cout << days;
	return 0;
}