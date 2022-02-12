/*
이진 탐색 알고리즘
lower_bound, upper_bound 라는 함수 형식으로 제공됨
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// lower_bound = 주어진 값이 처음으로 나오는 위치의 주소를 반환
// upper_bound = 주어진 값을 초과하는 수가 처음으로 나오는 위치의 주소를 반환

int main() {
	int arr[10] = { 1,2,3,4,5,6,6,6,6,6 };
    vector<int> arr2 = { 1,2,3,4,5,6,6,6,6,6 };

	cout << lower_bound(arr, arr + 10, 6) - arr << endl;                        // 주소값을 반환하므로
    cout << upper_bound(arr, arr + 10, 6) - arr << endl;                        // 인덱스값을 보고 싶으면
    cout << lower_bound(arr2.begin(), arr2.end(), 6) - arr2.begin() << endl;    // 다음과 같이 계산을 해야 함
    cout << upper_bound(arr2.begin(), arr2.end(), 6) - arr2.begin() << endl;    //
    
}