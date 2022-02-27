// n번째 피보나치 수열을 구하시오.

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i < n+1; i++)
        dp[i] = dp[i-1] + dp[i-2];
    
    cout << dp[n];
}

/*
수열이 주어질 떄, 그 수열에서 가장 긴 증가하는 부분 수열의 길이를 구하시오 (LIS 문제)
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[1001];
vector<int> dp(1001, 1);

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i < n+1; i++)
        cin >> arr[i];

    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
}