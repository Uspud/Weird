#include <iostream>

using namespace std;
/*
N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.
*/
int main(void) {
    int n;

    cin >> n;

    for(int i = 1; i < 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}