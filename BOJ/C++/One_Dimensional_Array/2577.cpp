#include <iostream>
#include <cmath>

using namespace std;
/*
세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
*/
int main(void) {
    int a, b, c, algebra[10], temp, flag;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> a;
    cin >> b;
    cin >> c;
    
    for (int i = 0; i < 10; i++) {
        algebra[i] = 0;
    }

    int sum = a * b * c;

    for (int i = 9; i > 0; i--) {
        if (!(int(sum / pow(10, i)) == 0)) {
            flag = i + 1;
            break;
        }
    }

    for (int i = flag; i > 0; i--) {
        temp = sum / pow(10, i-1);

        sum -= temp * pow(10, i-1);

        algebra[temp]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << algebra[i] << "\n";
    }

    return 0;
}