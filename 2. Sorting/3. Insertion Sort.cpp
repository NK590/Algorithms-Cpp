#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> Insertion_Sort(vector<int>& v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (v[j-1] > v[j])
                swap(v[j-1], v[j]);
        }
    }
    return v;
}

int main() {
    vector<int> v = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    vector<int> v_sorted = Insertion_Sort(v);
    
    for (auto& it : v)
        cout << it << " ";
    cout << '\n';
    for (auto& it : v_sorted)
        cout << it << " ";
}