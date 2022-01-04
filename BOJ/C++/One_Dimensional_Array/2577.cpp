#include <iostream>
#include <cmath>

using namespace std;
/*
�� ���� �ڿ��� A, B, C�� �־��� �� A �� B �� C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��� A = 150, B = 266, C = 427 �̶�� A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�, ����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.
*/
int main(void) {
    int a, b, c, algebra[10], temp, flag;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> a;
    cin >> b;
    cin >> c;
    
    for (int i = 0; i < 10; i++) {
        algebra[i] = 0;
    }

    int sum = a * b * c;

    for (int i = 9; i > 0; i--) {
        if (!(int(sum / pow(10, i)) == 0)) {
            flag = i + 1;
            break;
        }
    }

    for (int i = flag; i > 0; i--) {
        temp = sum / pow(10, i-1);

        sum -= temp * pow(10, i-1);

        algebra[temp]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << algebra[i] << "\n";
    }

    return 0;
}