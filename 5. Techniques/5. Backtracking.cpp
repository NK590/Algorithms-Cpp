/*
1부터 n까지의 자연수 중에서 중복 없이 m개를 고른 수열을 모두 출력하시오.
단, 수열은 사전 순으로 증가하는 순서로 출력하여아 한다.
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX 10

int n, m;
int arr[MAX];
bool chk[MAX] = {false, };
vector<int> visited;

void backtrack() {
    if (visited.size() == m) {
        for (auto& num : visited) cout << num << ' ';
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!chk[i]) {
            chk[i] = true;
            visited.push_back(arr[i]);
            backtrack();
            chk[i] = false;
            visited.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++) arr[i] = i+1;

    backtrack();
}