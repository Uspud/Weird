#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;
/*
����
�������� c d e f g a b C, �� 8�� ������ �̷�����ִ�. �� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�. c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.

1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 8���� 1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.

������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� 8�� ���ڰ� �־�����. �� ���ڴ� ���� ������ ������ ���̸�, 1���� 8���� ���ڰ� �� ���� �����Ѵ�.

���
ù° �ٿ� ascending, descending, mixed �� �ϳ��� ����Ѵ�.
*/
int main(void) {
    fastio;
    
    char a[8];

    for(int i = 0; i < 8; i++) {
        cin >> a[i];
    }

    int asc_flag = 1, dsc_flag = 1;
    for(int i = 0; i < 8; i++) {
        if(a[i] != i + 49) {
            asc_flag = 0;
        }
        if(a[i] != 56 - i) {
            dsc_flag = 0;
        }
    }

    if(asc_flag) {
        cout << "ascending";
        return 0;
    }
    else if(dsc_flag) {
        cout << "descending";
        return 0;
    }
    else {
        cout << "mixed";
        return 0;
    }
}