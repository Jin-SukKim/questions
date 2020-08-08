#include <iostream>

using namespace std;

/*
layer : 1 (+6)-> 2 ~ 7 (+12)-> 8 ~ 19 (+18)-> 20 ~ 37 -> 38 ~ 61 ->  62 ~ 70 ~ ...
*/
int main() {
	int layer = 1, room, count = 1;

	cin >> room;

	while (1) {
		if (room <= layer)
			break;
		layer += 6*count;
		count++;
	}

	cout << count;
	return 0;
}