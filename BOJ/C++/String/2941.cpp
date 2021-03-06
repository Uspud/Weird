#include <iostream>
#include <string>

using namespace std;
/*
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.

크로아티아 알파벳	변경
?	c=
?	c-
d?	dz=
đ	d-
lj	lj
nj	nj
?	s=
?	z=
예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, ?, nj, a, k)로 이루어져 있다. 단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

d?는 무조건 하나의 알파벳으로 쓰이고, d와 ?가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 위 목록에 없는 알파벳은 한 글자씩 센다.

첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.

단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.

입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string input;

    cin >> input;

    int length = input.length(), count = 0;

    for(int i = 0; i < length; i++) {
        if(input[i] == 'c' && (input[i+1] == '=' || input[i+1] == '-')) {
            count++;
            i++;
        }
        else if(input[i] == 'd') {
            if(input[i+1] == '-') {
                count++;
                i++;
            }
            else if(input[i+1] == 'z' && input[i+2] == '=') {
                count++;
                i += 2;
            }
            else    count++;
        }
        else if(input[i] == 'l' && input[i+1] == 'j') {
            count++;
            i++;
        }
        else if(input[i] == 'n' && input[i+1] == 'j') {
            count++;
            i++;
        }
        else if(input[i] == 's' && input[i+1] == '=') {
            count++;
            i++;
        }
        else if(input[i] == 'z' && input[i+1] == '=') {
            count++;
            i++;
        }
        else    count++;
    }

    cout << count;

    return 0;
}