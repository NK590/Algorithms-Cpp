/*
Set (집합)
STL의 컨테이너 클래스 중 하나로, 데이터값을 중복 없이 저장하는 자료 구조
기본적으로 정렬이 되어 있고 중복을 허용하지 않아 중복 제거나 특정 원소의 유무 여부를 체크하는 데 용이
*/

// 예시 코드

#include <iostream>
#include <set>                      // set 선언을 위한 헤더
using namespace std;

int main() {
    set<int> s;

    s.insert(1);                    // set에 원소 삽입
    s.insert(2);
    s.insert(3);

    s.erase(1);                     // set에서 원소 삭제
    s.erase(2);

    s.clear();                      // set에 있는 모든 원소 삭제

    s.find(1);                      // set에 해당 원소 위치 찾기
    s.count(2);                     // set에 해당 원소가 있는지 여부 확인
}