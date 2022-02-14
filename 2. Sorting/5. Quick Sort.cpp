#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> Quick_Sort(vector<int>& v) {
    if (v.size() < 2)
        return v;
    
    int pivot = v.size() / 2;
    vector<int> front_v, pivot_v, back_v;

    for (auto& it : v){
        if (it < v[pivot])
            front_v.push_back(it);
        else if (it > v[pivot])
            back_v.push_back(it);
        else
            pivot_v.push_back(it);
    }
    vector<int> x = Quick_Sort(front_v);
    vector<int> y = Quick_Sort(pivot_v);
    vector<int> z = Quick_Sort(back_v);

    x.insert(x.end(), y.begin(), y.end());
    x.insert(x.end(), z.begin(), z.end());

    return x;
}

int main() {
    vector<int> v = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    vector<int> v_sorted = Quick_Sort(v);
    
    for (auto& it : v)
        cout << it << " ";
    cout << '\n';
    for (auto& it : v_sorted)
        cout << it << " ";
}