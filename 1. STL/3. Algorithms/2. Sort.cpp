/*
해당 컨테이너 안의 원소를 특정한 방식으로 정렬함
*/

#include <iostream> 
#include <algorithm>
#include <vector>

using namespace std; 

bool desc(int a, int b){
    return b < a;
}

int main(void){ 
    int arr[10] = {3, 5, 9, 7, 8, 1, 4, 2, 10, 6}; 
    vector<int> arr2 = {3, 5, 9, 7, 8, 1, 4, 2, 10, 6};

    sort(arr, arr+10);                                  // 배열 오름차순 정렬
    stable_sort(arr, arr+10);

    for(int i=0; i<10; i++)
        cout << arr[i] << ' '; 

    sort(arr, arr+10, desc);                            // 배열 내림차순 정렬
    stable_sort(arr, arr+10, desc);

    for(int i=0; i<10; i++)
        cout << arr[i] << ' ';
    
    sort(arr2.begin(), arr2.end());                     // 벡터 오름차순 정렬
    stable_sort(arr2.begin(), arr2.end());

    vector<int>::iterator it;

    for(auto& it : arr2)
        cout << it << ' ';
}