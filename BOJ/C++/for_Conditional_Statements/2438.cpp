#include <iostream>

using namespace std;
// ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
int main(void) {
    int N;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= i; ++j){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}