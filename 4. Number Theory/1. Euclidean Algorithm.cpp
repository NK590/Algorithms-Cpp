#include <iostream>

using namespace std;

int GCD(int a, int b) {
    int temp;
    while (b > 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

int main() {
    int a = 18;
    int b = 30;

    cout << "a is " << a << ", " << "b is " << b << "\n";
    cout << "GCD is " << GCD(a, b) << "\n";
    cout << "LCM is " << LCM(a, b) << "\n";
}