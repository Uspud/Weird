#include <iostream>
#include <cstring>

using namespace std;
/*
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

������ ���ĺ��� ���ؼ�, a�� ó�� �����ϴ� ��ġ, b�� ó�� �����ϴ� ��ġ, ... z�� ó�� �����ϴ� ��ġ�� �������� �����ؼ� ����Ѵ�.

����, � ���ĺ��� �ܾ ���ԵǾ� ���� �ʴٸ� -1�� ����Ѵ�. �ܾ��� ù ��° ���ڴ� 0��° ��ġ�̰�, �� ��° ���ڴ� 1��° ��ġ�̴�.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    char s[101];

    int alph[26];

    cin >> s;

    for(int i = 0; i < 26; i++) alph[i] = -1;

    for(int i = 0; i < strlen(s); i++) {
        if(alph[s[i]-97] == -1){
            alph[s[i]-97] = i;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(i != 25) cout << alph[i] << " ";
        else cout << alph[i];
    }

    return 0;
}