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

    int n, count = 0;

    cin >> n;

    for(int loop = 0; loop < n; loop++) {
        string s;

        cin >> s;

        int alph[26] = { 0, }, length = s.length(), is_group_word = 1;

        for(int i = 0; i < length; i++) alph[s[i]-97]++;

        for(int i = 0; i < 26; i++) {
            int num = alph[i], found;

            if(num > 0) {
                for (int j = 0; j < length; j++) {
                    if(s[j] == i+97) {
                        found = j;
                        break;
                    }
                }

                for(int j = 0; j < alph[i]; j++) {
                    if(s[found+j] != i + 97) {
                        is_group_word = 0;
                        break;
                    }
                }
            }

            if(i == 25 && is_group_word == 1)    count++;
            else if(is_group_word == 0){
                is_group_word = 1;
                break;
            }
        }
    }

    cout << count;

    return 0;
}