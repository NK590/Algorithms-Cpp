/*
자연수 a를 b번 곱한 수를 c로 나눈 결과를 출력하시오.
단, a, b, c는 매우 큰 수일 수 있다.
*/

#include <iostream>

using namespace std;

long long int product(long long int a, long long int b, long long int c) {
    if (b == 1)
        return a % c;
    
    long long int x = product(a, b/2, c);
    
    if (b % 2 == 1)
        return (x*x*a) % c;
    else
        return (x*x) % c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b, c;
    cin >> a >> b >> c;

    cout << product(a, b, c);
}