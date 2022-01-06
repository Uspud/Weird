#include <iostream>
#include <string>

using namespace std;
/*
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

첫째 줄에 그룹 단어의 개수를 출력한다.
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