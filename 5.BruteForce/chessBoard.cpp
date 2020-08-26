#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string wb[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
};
string bw[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
};

int fix_cnt(string board[], int x, int y, int black) {
	int count = 0;

	//array pointer
	string (*pattern)[8] = &wb;

	if (black)
		pattern = &bw;

	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (board[i + x][j + y] != (*pattern)[i][j]) {
				++count;
			}
		}
	}

	return count;
}

int main() {
	int N, M, min_cnt = 50, count = 0;

	string board[50]; 

	cin >> N >> M;

	for (int i = 0; i < N; i++)
		cin >> board[i];

	for (int i = 0; i + 8 <= N; ++i) {
		for (int j = 0; j + 8 <= M; ++j) {
			count = min(fix_cnt(board, i, j, 0), fix_cnt(board, i, j, 1));
			if (count < min_cnt)
				min_cnt = count;
		}
	}
	cout << min_cnt;
	return 0;
}