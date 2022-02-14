/*
특정 원소가 해당 컨테이너 안에 있는지 없는지 탐색
있을 경우 해당 위치 반복자를, 없을 경우 .end()를 리턴
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    if (find(v.begin(), v.end(), 3) != v.end())
        cout << find(v.begin(), v.end(), 3) - v.begin();
    else
        cout << "Not in vector";
}