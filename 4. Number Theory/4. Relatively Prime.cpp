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

bool isRP(int a, int b) {
    if (GCD(a, b) == 1) return true;
    else return false;
}

int main() {
    int a = 198375347;
    int b = 8912643;

    cout << isRP(a, b);
}