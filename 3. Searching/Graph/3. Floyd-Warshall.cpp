#include <iostream>
#include <vector>
#include <algorithm>

#define llmax 9223372036854775807

using namespace std;

vector<vector<long long int>> Floyd_Warshall(vector<vector<long long int>> graph) {
    int n = graph.size();
    vector<vector<long long int>> dp(n, vector<long long int>(n, llmax));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = graph[i][j];
    
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dp[i][j] > dp[i][k] + dp[k][j]) dp[i][j] = dp[i][k] + dp[k][j];

    return dp;
}

int main() {
    vector<vector<long long int>> graph = {
        vector<long long int>({0, 1, 2, 3, 4}), 
        vector<long long int>({1, 0, 2, 7, 1}), 
        vector<long long int>({9, 2, 0, 3, 4}), 
        vector<long long int>({3, 2, 7, 0, 6}), 
        vector<long long int>({6, 8, 3, 2, 0}), 
    };

    vector<vector<long long int>> dp = Floyd_Warshall(graph);
    
    int length = graph.size();

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
}