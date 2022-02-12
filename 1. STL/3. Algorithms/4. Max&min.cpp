/*
최대값과 최소값을 찾는 함수
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[10] = {3, 5, 9, 7, 8, 1, 4, 2, 10, 6}; 
    vector<int> arr2 = {3, 5, 9, 7, 8, 1, 4, 2, 10, 6};

    cout << *max_element(arr, arr+10) << endl;              // 최대/최소값 자체를 출력하지 않고
    cout << *min_element(arr, arr+10) << endl;              // 그 주소를 리턴하므로, 값을 참조하려면
    cout << *max_element(arr2.begin(), arr2.end()) << endl; // * 연산자를 사용해야 함
    cout << *min_element(arr2.begin(), arr2.end()) << endl;
}