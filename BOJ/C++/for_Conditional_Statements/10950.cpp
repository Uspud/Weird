#include <iostream>

using namespace std;
/*
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main(void) {
    int T, i;
    cin >> T;
    
    int a[T], b[T];

    for (i = 0; i < T; i++) {
        cin >> a[i] >> b[i];
        
    }
    for (i = 0; i < T; i++) {
        cout << a[i] + b[i] << endl;
    }

    return 0;
}