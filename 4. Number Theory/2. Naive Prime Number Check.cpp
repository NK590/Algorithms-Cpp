#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;

    for (int i = 2; i < int(sqrt(n)) + 1; i++)
        if (n % i == 0)
            return false;
    
    return true;
}

int main() {
    int a = 7;
    int b = 1001;
    int c = 19037543;
    
    cout << isPrime(a) << "\n";
    cout << isPrime(b) << "\n";
    cout << isPrime(c) << "\n";
}