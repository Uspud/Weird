#include <iostream>

using namespace std;
/*
ù° �ٿ� ���� �� ���� �� �ϳ��� ����Ѵ�.

A�� B���� ū ��쿡�� '>'�� ����Ѵ�.
A�� B���� ���� ��쿡�� '<'�� ����Ѵ�.
A�� B�� ���� ��쿡�� '=='�� ����Ѵ�.
*/
int main(void) {
    int a, b;

    cin >> a >> b;

    if(a > b) {
        cout << ">" << endl;
    }
    else if (a < b){
        cout << "<" << endl;
    }
    else {
        cout << "==" << endl;
    }

    return 0;
}