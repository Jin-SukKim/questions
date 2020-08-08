#include <iostream>

using namespace std;
//재귀함수, 팩토리얼 등에 자주 사용
int getPeople(int a, int b) {
	if (b == 1)
		return 1;
	if (a == 0)
		return b;
	return (getPeople(a - 1, b) + getPeople(a, b - 1));
}
// 0층 1호 = 1명, 2호 = 2명, 3호 = 3명.
// k층 n호 사람수 = k-1층 n호 사람수 + k층 n-1호 사람수
// b/c k층 n-1호 사람수 = k-1층 1호 사람수 ~ n-1호 사람수의 합 = 바로 아래 층 옆호까지 사람수의 합.
int main() {
	int t, k, n;

	cin >> t;

	while (t-- > 0) {
		cin >> k;
		cin >> n;
		cout << getPeople(k, n) << endl;
	}

	return 0;
}