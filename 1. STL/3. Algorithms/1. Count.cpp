/*
해당 컨테이너 안에 있는 특정 원소의 개수를 셈
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "hihi";
    cout << count(s.begin(), s.end(), 'i') << '\n';
}