#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> Selection_Sort(vector<int>& v) {
    int n = v.size();
    
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min_index])
                min_index = j;
        }
        swap(v[i], v[min_index]);
    }
    return v;
}

int main() {
    vector<int> v = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    vector<int> v_sorted = Selection_Sort(v);
    
    for (auto& it : v)
        cout << it << " ";
    cout << '\n';
    for (auto& it : v_sorted)
        cout << it << " ";
}