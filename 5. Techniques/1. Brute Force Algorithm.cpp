// 1부터 1000 사이 자연수 중에서, 각 자리의 숫자가 등차수열을 이루는 수의 개수를 구하라

#include <iostream>
#include <string>
#include <set>

using namespace std;

int onenum(int n) {
    int arr[1000];
    int count = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        if (arr[i] < 100)
            count++;
        else if ((arr[i]/100) - (arr[i]/10 % 10) == (arr[i]/10 % 10) - (arr[i] % 10))
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << onenum(n);
}