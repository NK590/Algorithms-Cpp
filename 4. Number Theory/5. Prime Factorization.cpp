#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> Factorize(int n) {
    int factor = 2;
    vector<int> factors;

    while (pow(factor, 2) <= n) {
        while (n % factor == 0) {
            factors.push_back(factor);
            n = n / factor;
        }
        factor++;
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

int main() {
    int a = 30;
    int b = 111111111;
    int c = 83742932;

    vector<int> factor_a = Factorize(a);
    vector<int> factor_b = Factorize(b);
    vector<int> factor_c = Factorize(c);

    for (auto& num : factor_a)
        cout << num << " ";
    cout << "\n";
    for (auto& num : factor_b)
        cout << num << " ";
    cout << "\n";
    for (auto& num : factor_c)
        cout << num << " ";
    cout << "\n";
}