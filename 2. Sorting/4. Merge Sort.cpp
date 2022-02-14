#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> Merge_Sort(vector<int>& v) {
    if (v.size() < 2)
        return v;

    auto it = v.begin() + v.size() / 2;
    vector<int> low_temp(v.begin(), it);
    vector<int> high_temp(it, v.end());
    
    vector<int> low_v = Merge_Sort(low_temp);
    vector<int> high_v = Merge_Sort(high_temp);

    int low = 0;
    int high = 0;
    vector<int> merged_v;

    while (low < low_v.size() && high < high_v.size()){
        if (low_v[low] < high_v[high]) {
            merged_v.push_back(low_v[low]);
            low++;
        } else {
            merged_v.push_back(high_v[high]);
            high++;
        }
    }
    for (int i = low; i < low_v.size(); i++)
        merged_v.push_back(low_v[i]);
    for (int i = high; i < high_v.size(); i++)
        merged_v.push_back(high_v[i]);

    return merged_v;
}

int main() {
    vector<int> v = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    vector<int> v_sorted = Merge_Sort(v);
    
    for (auto& it : v)
        cout << it << " ";
    cout << '\n';
    for (auto& it : v_sorted)
        cout << it << " ";
}