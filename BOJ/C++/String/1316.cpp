#include <iostream>
#include <string>

using namespace std;
/*
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�. ���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.

�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�. ��° �ٺ��� N���� �ٿ� �ܾ ���´�. �ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.

ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, num = 0;

    string word;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> word;

        int length = word.length();
        int alph[26] = { 0, };

        for(int j = 0; j < length; j++) {
            alph[word[j]-97]++;
        }
    }

    return 0;
}