#include <iostream>

using namespace std;
/*
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.
*/
int main(void){
    int n;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}