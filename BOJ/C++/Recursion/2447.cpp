#include <iostream>
#include <cmath>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;
/*
������� �������� ���� ��� ����. N�� 3�� �ŵ�����(3, 9, 27, ...)�̶�� �� ��, ũ�� N�� ������ N��N ���簢�� ����̴�.

ũ�� 3�� ������ ����� ������ �ְ�, ����� ������ ��� ĭ�� ���� �ϳ��� �ִ� �����̴�.

***
* *
***
N�� 3���� Ŭ ���, ũ�� N�� ������ �������� ä���� ����� (N/3)��(N/3) ���簢���� ũ�� N/3�� �������� �ѷ��� �����̴�. ���� ��� ũ�� 27�� ������ ���� ��� 1�� ����.

ù° �ٿ� N�� �־�����. N�� 3�� �ŵ������̴�. �� � ���� k�� ���� N=3k�̸�, �̶� 1 �� k < 8�̴�.

ù° �ٺ��� N��° �ٱ��� ���� ����Ѵ�.
*/
void print(int i, int j, int n) {
    int flag = 1;
    for(int k = 1; k < n; k *= 3){
        if(int(ceil(float(i)/float(k))) % 3 == 2 && int(ceil(float(j)/float(k))) % 3 == 2) {
            cout << " ";
            flag = 0;
            break;
        }
    }

    if (flag) {
        cout << "*";
    }
    if(i == n && j == n) return;
    if(j == n) {
        cout << "\n";
        print(i+1, 1, n);
    }
    else {
        print(i, j+1, n);
    }
}

int main(void) {
    fastio;

    int n;
    cin >> n;

    print(1,1,n);

    return 0;
}