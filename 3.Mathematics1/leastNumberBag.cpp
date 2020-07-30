#include <iostream>

using namespace std;
// N = target kg, 5kg & 3kg suger bag
int main() {
	// N = target kg, remainder, count
	int N, r, count = 0;
	
	cin >> N;

	if (!(N % 5)) {
		count = N / 5; // 5 multiple.
	}
	else {
		count = N / 5;
		r = N % 5;
		
		if (r % 3 > 0 && N > 5) { // if 3kg needs more than one for no remainder. ex) 6kg
			count--;
			// when N > 10 and r == 2, it has remainder 1 if only one 5kg is added. 
			// Ex) N =12 -> r will be 7. 7 has remainder 1. 
			//howeever, if we add one more 5kg, it doesn't have remainder. 12 % 3 = 0;
			if (r % 3 == 2 && N > 10) { 
				count--;
				r += 5;
			}
			r += 5;
		}
		count += r / 3;
		r = r % 3;

		if (r)
			count = -1;
	}

	cout << count;

	return 0;
}