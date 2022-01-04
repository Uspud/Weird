#include <iostream>
#include <cstring>

using namespace std;
/*
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.

"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.

OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main(void) {
    int n;
    char string[80];

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    
    int score = 1, sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> string;

        for(int j = 0; j < strlen(string); j++) {
            if(string[j] == 'O') {
                sum += score;
                score++;
            }
            else {
                score = 1;
            }
        }

        cout << sum << "\n";
        sum = 0;
        score = 1;
    }

    return 0;
}