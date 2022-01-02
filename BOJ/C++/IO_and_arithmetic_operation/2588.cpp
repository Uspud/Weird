#include <iostream>

using namespace std;
// 첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.
int main(void) {
    int a, b;

    cin >> a;
    cin >> b;

    int first, second, third, forth;

    first = a * (b % 100 % 10);
    second = a * (b % 100 / 10);
    third = a * (b / 100);
    forth = a * b;

    cout << first << "\n" << second << "\n" << third << "\n" << forth << endl;

    return 0;
}