#include <iostream>

using namespace std;
/*
    tail recursion = 꼬리 재귀함수
    재귀함수 사용이유 :
        1. 가독성 (알고리즘이 재귀적 표현하기 자연스러울때)
        2. 변수 사용 감소 
            (mutable state, 변경 가능한 상태,를 제거해 프로그램 오류 발생 가능성 하락)
    단점 :
        1. 메모리를 많이 차지
        2. 반복문 (for, while ..)에 비해 느림
        3. 함수 반복적 호ㅜㄹ로 스택 메모리 증가 -> 스택 오버플로우 가능성 높아짐 

    꼬리 재귀함수 사용이유 :
        재귀함수의 단점 일부 해결 가능.
            단 컴파일러가 꼬리 재귀함수 최적화 지원 가능해야됨.
     
*/
//acc = accumulate = 축적하다
int factorial(int n, int acc) {
    if (n == 1)
        return acc;
    if (n == 0)
        return 1;

    return factorial(n - 1, acc * n);
}

int main() {
    int n;

    cin >> n;

    cout << factorial(n, 1);

    return 0;
}