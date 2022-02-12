/*
Map (맵)
STL의 컨테이너 클래스 중 하나로, key값과 그 key값에 해당하는 value값으로 짝지어진 자료 구조
Python의 Dictionary 자료형과 동일함
*/

// 예시 코드

#include <iostream>
#include <map>                                  // map 선언 시 필요한 헤더
using namespace std;

int main() {
    map<char, int> m;                           // map 선언 (key와 value 자료형을 동시에 지정해줌)

    m.insert(pair<char, int>('a', 100));        // map에 key, value 쌍 입력 (가장 일반적)

    map<char, int>::iterator it = m.begin();    // iterator 선언 후
    m.insert(it, pair<char, int>('b', 200));    // iterator를 이용하여 map에 key, value 쌍 입력

    map<char, int> n;
    n.insert(m.begin(), m.find('b'));           // 다른 map에 삽입

    m.erase('b');                               // 해당되는 key 값에 해당하는 원소 삭제

    m.clear();                                  // 모든 원소 삭제
}