#include <iostream>
#include <cstring>

using namespace std;
// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
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