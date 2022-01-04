#include <iostream>

using namespace std;
/*
�����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. �ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.

���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.

�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;

    cin >> n;

    double score[n], M = 0;

    for(int i = 0; i < n; i++) {
        cin >> score[i];
        
        if (score[i] > M) M = score[i];
    }

    double sum = 0;

    for(int i = 0; i < n; i++) {
        sum += score[i] / M * 100;
    }
    
    cout << sum / n;

    return 0;
}