#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;
/*
0���� ũ�ų� ���� ���� N�� �־�����. �̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� ���� N(0 �� N �� 12)�� �־�����.

ù° �ٿ� N!�� ����Ѵ�.
*/
int factorial(int value, int n){
    if(n == 1)  return value;

    value *= n;
    n--;

    return factorial(value, n);
}

int main(void){
    fastio

    int n;

    cin >> n;

    if(n == 0) {
        cout << "1";
        return 0;
    }

    int result = factorial(1, n);

    cout << result;

    return 0;
}