#include <iostream>
#include <cstring>

using namespace std;
// ���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    char s[1000001];

    int alph[26] = { 0, };

    cin >> s;

    for(int i = 0; i < 1000001; i++){
        if(s[i] == '\0') break;

        for(int j = 0; j < 26; j++){
            if(s[i] == j + 65 || s[i] == j + 97) {
                alph[j]++;
                break;
            }
        }
    }
    int max = 0, checker = 0;

    for(int i = 0; i < 26; i++) {
        if(alph[i] > max) {
            max = alph[i];
        }
    }

    for (int i = 0; i < 26; i++) {
        if(alph[i] == max) checker++;
    }

    if(checker >= 2) {
        cout << "?";
        return 0;
    }

    for (int i = 0; i < 26; i++) {
        if(alph[i] == max) {
            cout << char(i+65);
            return 0;
        }
    }
}