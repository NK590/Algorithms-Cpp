/*
캠핑장을 연속하는 P일 중, L일동안만 사용할 수 있다. 총 휴가가 V일이라고 했을 때, 휴가 V일 동안
캠핑장을 이용할 수 있는 최대 일수를 구하시오.
*/

#include <iostream>

using namespace std;

int main() {
    int l, p, v;
    cin >> l >> p >> v;
    int count = l * (v / p);
    if (v % p < l)
        count += v % p;
    else
        count += 1;
    cout << count;
}