#include <iostream>

using namespace std;
/// ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C) + (B%C))%C, ��° �ٿ� (A��B)%C, ��° �ٿ� ((A%C) �� (B%C))%C�� ����Ѵ�.
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