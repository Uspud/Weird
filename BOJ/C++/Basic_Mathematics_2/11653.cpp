#include <iostream>
#include <cmath>

using namespace std;
/*
���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� ���� N (1 �� N �� 10,000,000)�� �־�����.

N�� ���μ����� ����� �� �ٿ� �ϳ��� ������������ ����Ѵ�. N�� 1�� ��� �ƹ��͵� ������� �ʴ´�.
*/

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, x =2;

    cin >> n;
    
    while(n != 1) {
        if(n%x == 0) {
            cout << x << "\n";
            n /= x;
        }
        else    x++;
    }

    return 0;
}