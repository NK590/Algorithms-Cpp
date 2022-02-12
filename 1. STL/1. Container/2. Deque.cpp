/*
Deque (덱)
STL의 컨테이너 클래스 중 하나로, 양 끝단에서 입력과 출력을 받을 수 있는 동적 크기 자료구조
vector와 전체적으로 기본 구조가 비슷하나, vector와는 다르게 연속되지 않은 메모리 블럭에 데이터를 저장함
*/

// 예시 코드
// 거의 대부분 멤버가 vector와 동일하므로, vector와 겹치는 부분은 생략

#include <iostream>
#include <deque>                            // deque 선언 시 필요한 헤더
using namespace std;

int main() {
    deque<int> d;                           // deque 선언

    d.pop_back();                           // 끝 원소를 삭제
    d.pop_front();                          // 처음 원소를 삭제
    d.push_back();                          // 끝에 원소를 추가
    d.push_front();                         // 처음에 원소를 추가
}