#include <iostream>

using namespace std;
/*
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b;

    while(true){
        cin >> a >> b;
        if(cin.eof() == true) {
            break;
        }
        cout << a + b << "\n";
    }

    return 0;
}