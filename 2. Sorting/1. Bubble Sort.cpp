#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> Bubble_Sort(vector<int> v) {
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j+1])
                swap(v[j], v[j+1]);
        }
    }
    return v;
}

int main() {
    vector<int> v = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    vector<int> v_sorted = Bubble_Sort(v);
    
    for (auto& it : v)
        cout << it << " ";
    cout << "\n";
    for (auto& it : v_sorted)
        cout << it << " ";
}