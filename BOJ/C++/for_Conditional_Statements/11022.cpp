#include <iostream>

using namespace std;
// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main(void) {
    int T;
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;

    int a, b;

    for (int i = 0; i < T; ++i) {
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a+b << "\n"; 
    }
    
    return 0;
}