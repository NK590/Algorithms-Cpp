#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

void BFS(vector<vector<int>> graph, vector<int>& visited, vector<bool>& check, int start) {
    deque<int> deque = {start};

    while (deque.size() > 0) {
        int node = deque.front();
        deque.pop_front();
        if (check[node] == false) {
            visited.push_back(node);
            check[node] = true;
            for (auto& it : graph[node])
                deque.push_back(it);
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        vector<int>({1, 2}), 
        vector<int>({0, 3, 4}), 
        vector<int>({0, 5, 6}), 
        vector<int>({1}), 
        vector<int>({1}), 
        vector<int>({2}), 
        vector<int>({2})
    };
    vector<int> visited;
    vector<bool> check(graph.size(), false);

    BFS(graph, visited, check, 0);

    for (auto& it : visited)
        cout << it << ' ';
}