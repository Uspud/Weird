#include <iostream>
#include <cstring>

using namespace std;
/*
���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�. S���� QR Code "alphanumeric" ���ڸ� ����ִ�.

QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;

    cin >> t;

    int r;
    char s[21];

    for(int i = 0; i < t; i++) {
        cin >> r >> s;

        for(int j = 0; j < strlen(s); j++) {
            for(int k = 0; k < r; k++) {
                cout << s[j];
            }
        }

        cout << "\n";
    }

    return 0;
}