#include <iostream>

using namespace std;
// ù° �ٺ��� ��° �ٱ��� ���ʴ�� (3), (4), (5), (6)�� �� ���� ����Ѵ�.
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