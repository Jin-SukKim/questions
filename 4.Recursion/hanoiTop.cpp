#include <iostream>

using namespace std;

void hanoi(int n, int from, int by, int to) {
    if (n == 1)
        cout << from << " " << to << "\n";
    else {
        hanoi(n - 1, from, to, by);
        cout << from << " " << to << "\n";
        //위 재귀함수 끝나기 전, 중간부터 사용됨
        hanoi(n - 1, by, from, to);
    }

}

int main() {
    int n;

    cin >> n;

    // pow() 는 double형 사용. 최대값인 20 입력 -> 오차범위가 커져 틀림 메시지 출력.
    // (int)pow() 활용 혹은 << >> 시프느 연산 활용
    // 1<<n -> left shift n number. n>>1 -> right shift
    // ex) n = 2 = 01(base2). after 1<<n -> 4, 01 -> 10(base2) = 4
    cout << (1 << n) - 1 << "\n";
    hanoi(n, 1, 2, 3);
    
    return 0;
}