#include <iostream>

using namespace std;

/*
1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 -> 1/3 -> 1/4 -> 2/3 -> 3/2 -> 4/1 -> 5/1 -> 4/2 ...
*/
int main() {
	int n, count = 0;

	cin >> n;

	while (n > 0) {
		// find where it is. ex) count = which line
		// if n = 8, count = 4, n -> -2
		// if n = 9, count = 4, n -> -1
		// 1 + 2+ 3+ ..
		// 1 = 1(top), 1+2(down) = 3, 1+2+3(top) = 6, 1+2+3+4(Down) = 10, 1+2+3+4+5=15
		count++;
		n -= count;
	}
	// 1 = 1/1, 3 = 2/1, 5 = 2/2, 7 = 1/4, 9 =  3/2, 11 = 5/1 ...
	if (count % 2 == 0)
		cout << count + n << "/" << -n+1;
	// 2 = 1/2, 4 = 3/1, 6 = 1/3, 8 = 2/3, 10 = 4/1 ...
	else 
		cout << -n + 1 << "/" << count + n;
	return 0;
}