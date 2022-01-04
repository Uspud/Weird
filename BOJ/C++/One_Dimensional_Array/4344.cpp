#include <iostream>

using namespace std;
/*
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.

��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int c;

    cin >> c;

    int n[c];

    for(int i = 0; i < c; i++) {
        cin >> n[i];

        int score[n[i]], sum = 0, check = 0;

        for(int j = 0; j < n[i]; j++) {
            cin >> score[j];
            sum += score[j];
        }
        for (int j = 0; j < n[i]; j++) {
            if (score[j] > float(sum) / float(n[i])) {
                check++;
            }
        }
        
        cout << fixed;
        cout.precision(3);
        cout << float(check)/float(n[i])*100 << "%\n";
    }
    return 0;
}