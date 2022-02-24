#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> Sieve(int n) {
    bool arr[n+1];
    fill_n(arr, n+1, true);

    for (int i = 2; i < int(sqrt(n)) + 1; i++)
        if (arr[i] == true)
            for (int j = 2 * i; j < n+1; j += i)
                arr[j] = false;
    
    vector<int> ans;
    
    for (int i = 2; i < n+1; i++)
        if (arr[i] == true)
            ans.push_back(i);
    
    return ans;
}

int main() {
    int n = 1000;
    vector<int> ans = Sieve(n);

    for (auto& num : ans)
        cout << num << " ";
}