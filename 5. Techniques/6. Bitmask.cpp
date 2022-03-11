#include <iostream>
#include <algorithm>

using namespace std;

int bitset;
int input;

// 비트집합 내 원소의 수를 구하는 함수
int sizeof_bitset(int bitset) {
    if (bitset == 0) return 0;
    return bitset % 2 + sizeof_bitset(bitset / 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    bitset = 0b0;                               // 초기 비트값을 0으로 초기화

    bitset = 0b1111111111;                      // 초기 비트값을 1로 초기화
    bitset = (1 << 10) - 1;                     // 비트 연산을 이용한 다른 방법

    cin >> input;                               // input을 입력받아
    bitset = bitset | (1 << input);             // input번째 원소를 비트집합에 추가

    cin >> input;                               // input을 입력받아
    bitset = bitset & ~(1 << input);            // input번째 원소를 비트집합에서 제거

    cin >> input;                               // input을 입력받아
    if (bitset & (1 << input))                  // input번째 원소가 들어있는지 확인
        cout << "YES";                          // 들어있으면 YES
    else                                        // 안 들어있으면 NO
        cout << "NO";

    cin >> input;                               // input을 입력받아
    bitset = bitset ^ (1 << input);             // input번째 원소를 반전 (0이면 1로, 1이면 0으로)

    int bitset2 = 0b1;                          // 두 비트집합 사이 연산은 일반 비트연산자로 계산 가능
    bitset | bitset2;                           // 합집합
    bitset & bitset2;                           // 교집합
    bitset & ~(bitset2);                        // 차집합
    bitset ^ bitset2;                           // 둘 중 한 군데에만 속한 원소 집합
}