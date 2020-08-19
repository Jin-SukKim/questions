#include <iostream>
#include <cmath>

using namespace std;
/*
	1*1 =1, distance = 1, count = 1
	distance = 2, count = 2
	distance = 3, count = 3
	2*2 = 4, distance = 4, count = 3
	distance = 5, count = 4
	distance = 6, count = 4
	distance = 7, count = 5
	distance = 8, count = 5
	3*3 = 9, distance = 9, count = 5
	distance = 10, count = 6
	distance = 11, count = 6
	distance = 12, count = 6
	distance = 13, count = 7
	distance = 14, count = 7
	distance = 15, count = 7
	4*4 = 16, distance = 16, count = 7
	distance = 17, count = 8
	i 제곱 = 거리, 이후 작동횟수 증가
	i 제곱과 i-1 제곱 중간값부터 1 증가
*/
int main() {
	int t;
	double x, y;

	cin >> t;

	while (t--) {
		cin >> x >> y;
		double i = 1;
		
		for (;;i++) {
			// i 제곱값 찾기
			if (i * i > y - x)
				break;
		}
		// 거리가 i-1 제곱이랑 같은경우 작동횟수 없음
		if (pow(i - 1, 2) == y - x)
			cout << 2 * i - 3 << '\n';
		// i-1 제곱과 i 제곱 중간값보다 작으면 작동횟수 +1
		else if ((pow(i, 2) + pow(i - 1, 2)) / 2 >= y - x)
			cout << 2 * (i - 1) << '\n';
		// i-1 제곱과 i 제곱 중간값보다 크면 작동횟수 +2
		else
			cout << 2 * (i - 1) + 1 << '\n';
	}

	return 0;
}