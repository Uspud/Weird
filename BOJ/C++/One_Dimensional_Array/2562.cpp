#include <iostream>

using namespace std;
/*
9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ���, ���� �ٸ� 9���� �ڿ���

3, 29, 38, 12, 57, 74, 40, 85, 61

�� �־�����, �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a[9], max = 0, max_index;

    for(int i = 0; i < 9; i++) {
        cin >> a[i];

        if(max < a[i]) {
            max = a[i];
            max_index = i + 1;
        }
    }

    cout << max << "\n" << max_index;

    return 0;
}