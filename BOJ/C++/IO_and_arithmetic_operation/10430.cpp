#include <iostream>

using namespace std;
/// 첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
int main(void) {
    int a, b, c;

    cin >> a >> b >> c;

    int first, second, third, forth;

    first = (a+b)%c;
    second = ((a%c) + (b%c))%c;
    third = (a*b)%c;
    forth = ((a%c) * (b%c))%c;

    cout << first << "\n" << second << "\n" << third << "\n" << forth << endl;

    return 0;
}