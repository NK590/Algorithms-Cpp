/*
List (리스트)
STL의 컨테이너 클래스 중 하나로, 양방향 연결 리스트 자료구조
임의 위치의 원소 참조에는 모든 원소를 순차적으로 돌 필요가 있어 O(n)의 시간이 걸리지만,
임의 위치의 원소 삽입/삭제는 O(1)의 시간이 걸림
*/

// 예시 코드

#include <iostream>
#include <list>                             // 리스트 선언 시 필요한 헤더
using namespace std;

int main() {
    list<int> l;

    l.push_back(1);                         // 리스트 맨 뒤에 원소 추가
    l.push_front(1);                        // 리스트 맨 앞에 원소 추가
    l.pop_back();                           // 리스트 맨 뒤 원소 삭제
    l.pop_front();                          // 리스트 맨 앞 원소 삭제

    l.front();                              // 첫번째 원소를 참조
    l.back();                               // 마지막 원소를 참조

    // 리스트는 임의 위치 접근을 지원하지 않아 iterator를 사용하해야 함
    l.insert(l.begin(), 1);                 // iterator가 가리키는 위치에 원소 삽입
    l.erase(l.end());                       // iterator가 가리키는 원소 삭제
}