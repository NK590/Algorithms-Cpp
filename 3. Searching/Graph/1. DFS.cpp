#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

// 재귀 구현
void DFS_1(vector<vector<int>> graph, vector<int>& visited, vector<bool>& check, int start) {
    visited.push_back(start);
    check[start] = true;

    for(int i = 0; i < graph[start].size(); i++){
        int next = graph[start][i];
        if (check[next] == false) {
            DFS_1(graph, visited, check, next);
        }
    }
}

// 스택 구현
void DFS_2(vector<vector<int>> graph, vector<int>& visited, vector<bool>& check, int start) {
    deque<int> stack = {start};

    while (stack.size() > 0) {
        int node = stack.back();
        stack.pop_back();
        if (check[node] == false) {
            visited.push_back(node);
            check[node] = true;
            for (auto& it : graph[node])
                stack.push_back(it);
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
    vector<int> visited_2;
    
    vector<bool> check(graph.size(), false);
    vector<bool> check_2(graph.size(), false);

    DFS_1(graph, visited, check, 0);

    for (auto& it : visited)
        cout << it << ' ';
    cout << '\n';
    
    DFS_2(graph, visited_2, check_2, 0);

    for (auto& it : visited_2)
        cout << it << ' ';
}