#include <iostream>
#include <string>

using namespace std;
/*
���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־�����. �� ���ڿ����� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, �� �ܾ ���� �� �����ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ�.

ù �ٿ� ���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־�����. �� ���ڿ��� ���̴� 1,000,000�� ���� �ʴ´�. �ܾ�� ���� �� ���� ���еǸ�, ������ �����ؼ� ������ ���� ����. ���� ���ڿ��� �������� �����ϰų� ���� �� �ִ�.

ù° �ٿ� �ܾ��� ������ ����Ѵ�.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    int count = 0, length = 0;

    getline(cin, s);

    for(int i = 0; i < 1000001; i++) {
        if(s[i] == '\0') {
            length = i;
            break;
        }

        if(s[i] == ' ') count++;
    }

    if(s[0] == '\x20') count --;
    if(s[length-1] == '\x20') count--;

    cout << count+1;

    return 0;
}