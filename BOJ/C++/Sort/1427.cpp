#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;
/*
����
�迭�� �����ϴ� ���� ����. ���� �־�����, �� ���� �� �ڸ����� ������������ �����غ���.

�Է�
ù° �ٿ� �����Ϸ��� �ϴ� �� N�� �־�����. N�� 1,000,000,000���� �۰ų� ���� �ڿ����̴�.

���
ù° �ٿ� �ڸ����� ������������ ������ ���� ����Ѵ�.
*/
bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    fastio;
    
    string n;

    cin >> n;

    int size_n = n.size();
    int arr[size_n];

    for(int i = 0; i < size_n; i++) {
        arr[i] = n[i] - '0';
    }

    sort(arr, arr+size_n, compare);

    for(int i = 0; i < size_n; i++) {
        cout << arr[i];
    }

    return 0;
}