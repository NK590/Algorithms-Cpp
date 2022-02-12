/*
Vector(벡터)
STL의 컨테이너 클래스 중 하나로, 동적으로 원소를 추가할 수 있는 가변 크기 배열
배열과 마찬가지로 데이터가 연속된 메모리 블럭에 저장되어, 단순 참조와 끝 원소 삽입에는 O(1)의 시간이 걸리지만
중간에 원소를 끼워넣을 때에는 O(n)의 시간이 걸림
*/

// 예시 코드

#include <iostream>
#include <vector> // 벡터를 선언할 때 필요한 헤더
using namespace std;

int main () {

    // vector 선언법
    vector<int> v;                          // int타입 벡터 생성
    vector<int> v = { 1, 2, 3};             // int형 백터 생성 후 1, 2, 3 으로 초기화
    vector<int> v[10];                      // int타입 벡터 배열(크기 : 10) 생성
    vector<int> v[] = {{ 1, 2}, {3, 4}};    // int형 백터 배열 생성(행은 가변이지만 열은 고정)
    vector<vector<int>> v;                  // 2차원 백터 생성(행과 열 모두 가변)
    vector<int> v(5);                       // 5개의 원소를 0으로 초기화
    vector<int> v(5, 3);                    // 5개의 원소를 3으로 초기화
    vector<int> v2(v);                      // 벡터 v를 복사하여 벡터v2 생성

    // vector 값 추가
    v.push_back(10);                        // 마지막 위치에 숫자 10 추가
    vector<int>::iterator it = v.begin();
    it = v.insert(it, 2);                   // 맨앞에 2를 삽입
    it = v.insert(it, 2, 3);                // 맨앞에 3을 2개 삽입
    it = v.insert(it+2, 2, 4);              // 2번째부터 4를 2개 삽입

    // vector 값 삭제
    v.pop_back();                           // 마지막에 넣은 값 제거
    v.erase(v.begin()+10);                  // index 10의 값을 제거
    v.erase(v.begin(), v.begin()+5);        // index 0~5의 값을 제거
    v.clear();                              // 모든 값 제거

    // vector 크기 구하기
    v.size();                               // vector의 원소 갯수
    v.capacity();                           // vector의 물리적 크기

    // vector 값 출력
    vector<int> v;
    for (int i=0; i<5; i++) {
        v.push_back(i);                     // vector 요소 추가
    }                        
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";                // 모든 값 출력 : 0 1 2 3 4
    }
    cout << v[2] << endl;                   // index 2의 값 출력 : 2
    cout << v.front() << endl;              // 처음 요소 출력 : 0
    cout << v.back() << endl;               // 마지막 요소 출력 : 4

    // iterator를 활용하여 vector 값 출력
    // 1~5의 숫자를 Vector에 저장
    vector<int> v1;
    for (int i = 1; i <= 5; i++)
        v1.push_back(i);

    // Iterator로 Vector의 아이템을 출력
    // begin() : 첫번째 위치의 Iterator를 리턴
    // v1.end() : 마지막 아이템 다음 위치의 Iterator를 리턴
    for (auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << " ";

    // 반대 방향으로 아이템을 출력
    // rbegin(), rend()는 역순(reverse)의 Iterator를 리턴
    cout << "\n";
    for (auto ir = v1.rbegin(); ir != v1.rend(); ++ir)
        cout << *ir << " ";

    // 배열처럼 Vector[index] 으로 아이템 출력
    cout << "\n";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    // Vector.at(index)로 아이템 출력
    cout << "\n";
    for (int i = 0; i < v1.size(); i++)
        cout << v1.at(i) << " ";
}