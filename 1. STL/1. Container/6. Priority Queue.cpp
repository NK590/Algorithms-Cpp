/*
Priority Queue (우선순위 큐)
STL의 컨테이너 클래스 중 하나로, 입력 순서에 관계없이 출력할 때 원소의 '우선순위'에 따라 출력을 하는 자료구조
별도의 정렬을 할 필요없이 우선순위(일반적으로 원소의 크기)에 따라 입출력이 가능함
*/

// 예시 코드

#include <iostream>
#include <queue>                        // 우선순위 큐는 queue 헤더로 선언 가능
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(10);                        // 우선순위 큐에 값 넣기
    pq.push(20);
    pq.push(15);

    pq.top();                           // 제일 우선순위가 높은 값 참조

    pq.pop();                           // 우선순위에 따라 값 삭제
    pq.pop();
    pq.pop();
}