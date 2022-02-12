/*
Random Access Iterator (임의 접근 반복자)
읽기, 쓰기, 접근을 전부 지원하고 산술 연산(++, --, +, -, +=, -=), 비교 연산(==, !=, >, <, >=, <=)
과 더불어 it[](= *(itr+n)) 과 같이 직접 첨자 연산자까지 사용 가능해서 반복자끼리의 이항연산이 편리함
vector, deque가 이 반복자를 지원함
*/

// 예시 코드

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    for (int i = 0; i < 10; ++i)
        v.push_back(i);

    vector<int>::iterator it = v.begin();

    while (it != v.end()) {
        cout << *it << " ";
        ++it;
    }

    it = v.begin();

    for (auto& it : v)
        cout << it << " ";
}