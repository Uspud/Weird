#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;
/*
문제
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

입력
첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

출력
첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.
*/
bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    fastio;
    
    string n;

    cin >> n;

    int size_n = n.size();
    int arr[size_n];

    for(int i = 0; i < size_n; i++) {
        arr[i] = n[i] - '0';
    }

    sort(arr, arr+size_n, compare);

    for(int i = 0; i < size_n; i++) {
        cout << arr[i];
    }

    return 0;
}