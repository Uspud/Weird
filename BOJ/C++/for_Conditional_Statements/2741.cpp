#include <iostream>

using namespace std;
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cout << i+1 << "\n";
    }

    return 0;
}