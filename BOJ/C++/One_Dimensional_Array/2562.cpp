#include <iostream>

using namespace std;
/*
9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

예를 들어, 서로 다른 9개의 자연수

3, 29, 38, 12, 57, 74, 40, 85, 61

이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a[9], max = 0, max_index;

    for(int i = 0; i < 9; i++) {
        cin >> a[i];

        if(max < a[i]) {
            max = a[i];
            max_index = i + 1;
        }
    }

    cout << max << "\n" << max_index;

    return 0;
}