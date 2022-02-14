#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int> Heap_Sort(vector<int>& v){
    int size = v.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;

    for (auto& it : v)
        pq.push(it);
    
    for (int i = 0; i < size; i++) {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}

int main() {
    vector<int> v = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    vector<int> v_sorted = Heap_Sort(v);
    
    for (auto& it : v)
        cout << it << " ";
    cout << '\n';
    for (auto& it : v_sorted)
        cout << it << " ";
}