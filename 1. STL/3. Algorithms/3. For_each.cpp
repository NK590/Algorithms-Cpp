/*
범위 내의 윈소들에 대해 지정된 함수를 실행시키는 연산
함수를 실행시키되 원소를 수정하지 않는 점에 주의
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void print_fnc(int n) {
    cout << n << " ";
}

int main(void) {

    int arr[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
    
    cout << "arr [9]의 값 : " << arr[9] << endl;
    for_each(arr, &arr[9], print_fnc);
    cout << endl;

    cout << "arr [10]의 값 : " << arr[10] << endl;      // 오류
    for_each(arr, &arr[10], print_fnc);

    vector<int> v = { 1,2,3,4,5 };
    vector<int>::iterator itr = v.begin();

    cout << "for_each문 함수 호출 : ";
    for_each(v.begin(), v.end(), print_fnc);            // 함수 호출
    cout << endl;

    cout << "for_each문 Lambda 호출 : ";
    for_each(itr, itr + v.size(), [](auto& n) {         // Lambda 호출
        cout << n << " ";
        });
}