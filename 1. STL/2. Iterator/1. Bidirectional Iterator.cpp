/*
Bidirectional Iterator (양방향 반복자)
읽기, 쓰기, 접근이 전부 가능하고 산술 연산(++, --), 비교 연산(==, !=)이 가능한 반복자
list, set, map이 이 반복자를 지원함
*/

// 예시 코드

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, char> m;

    for (int i = 0; i < 10; i++)
        m.insert(make_pair(i, char(i+65)));
    
    map<int, char>::iterator it = m.begin();
    
    for (auto it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << endl;

    it = m.begin();

    for (auto it : m)
        cout << it.first << " " << it.second << endl;
}