#include <iostream>
#include <string>

using namespace std;
/*
�������� �ü������ ũ�ξ�Ƽ�� ���ĺ��� �Է��� ���� ������. ����, ������ ���� ũ�ξ�Ƽ�� ���ĺ��� �����ؼ� �Է��ߴ�.

ũ�ξ�Ƽ�� ���ĺ�	����
?	c=
?	c-
d?	dz=
��	d-
lj	lj
nj	nj
?	s=
?	z=
���� ���, ljes=njak�� ũ�ξ�Ƽ�� ���ĺ� 6��(lj, e, ?, nj, a, k)�� �̷���� �ִ�. �ܾ �־����� ��, �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.

d?�� ������ �ϳ��� ���ĺ����� ���̰�, d�� ?�� �и��� ������ ���� �ʴ´�. lj�� nj�� ���������̴�. �� ��Ͽ� ���� ���ĺ��� �� ���ھ� ����.

ù° �ٿ� �ִ� 100������ �ܾ �־�����. ���ĺ� �ҹ��ڿ� '-', '='�θ� �̷���� �ִ�.

�ܾ�� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ�. ���� ������ ǥ�� �����ִ� ���ĺ��� ����� ���·� �Էµȴ�.

�Է����� �־��� �ܾ �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.
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