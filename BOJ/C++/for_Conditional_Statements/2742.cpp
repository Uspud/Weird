#include <iostream>

using namespace std;
// �ڿ��� N�� �־����� ��, N���� 1���� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << N-i << "\n";
    }

    return 0;
}