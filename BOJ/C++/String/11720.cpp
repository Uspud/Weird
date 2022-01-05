#include <iostream>

using namespace std;
// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, sum = 0;

    cin >> n;

    char a[n+1];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        
        sum += a[i] - 48;
    }

    cout << sum;

    return 0;
}