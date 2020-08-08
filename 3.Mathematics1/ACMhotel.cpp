#include <iostream>

using namespace std;

int main() {
	int t, h, w, N, y,x;

	cin >> t;
	
	while(t--) {
		cin >> h >> w >> N;
	
		if (N % h) {
			y = N % h;
			x = N / h + 1;
		}
		else {
			y = h;
			x = N / h;
		}
		
		cout << y * 100 + x << endl;
	}

	return 0;
}