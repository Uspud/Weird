#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;
/*
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

첫째 줄에 정수 N(0 ≤ N ≤ 12)이 주어진다.

첫째 줄에 N!을 출력한다.
*/
int factorial(int value, int n){
    if(n == 1)  return value;

    value *= n;
    n--;

    return factorial(value, n);
}

int main(void){
    fastio

    int n;

    cin >> n;

    if(n == 0) {
        cout << "1";
        return 0;
    }

    int result = factorial(1, n);

    cout << result;

    return 0;
}