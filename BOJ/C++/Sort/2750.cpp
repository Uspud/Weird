#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;
/*
����
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� ���� N(1 �� N �� 1,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� �� �־�����. �� ���� ������ 1,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.

���
ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
*/

int main(void) {
    fastio;

    int n;
    
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(array[i] <= array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << array[i] << "\n";
    }

    return 0;
}