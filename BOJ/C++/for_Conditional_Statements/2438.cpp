#include <iostream>

using namespace std;
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
int main(void) {
    int N;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}