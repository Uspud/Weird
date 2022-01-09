#include <iostream>
#include <cmath>

using namespace std;
/*
M�̻� N������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� �ڿ��� M�� N�� �� ĭ�� ���̿� �ΰ� �־�����. (1 �� M �� N �� 1,000,000) M�̻� N������ �Ҽ��� �ϳ� �̻� �ִ� �Է¸� �־�����.

�� �ٿ� �ϳ���, �����ϴ� ������� �Ҽ��� ����Ѵ�.
*/
int is_prime(int a) {       //�Ҽ� �Ǻ�. a�� �Ҽ��� �� 1, �Ҽ��� �ƴ� �� 0
    int count = 0;

    if(a == 1) return 0;
    
    for(int i = 2; i <= sqrt(a); i++) {
        if(a % i == 0) {
            count++;
            break;
        }
    }

    if(!count)  return 1;

    return 0;
}

int main(void) {
    int m, n;

    cin >> m >> n;

    for(int i = m; i <= n; i++) {
        if(i > 2){
            if(i % 2 == 0)  continue;
        }
        if(i > 3) {
            if(i % 3 == 0)  continue;
        }
        if(i > 5) {
            if(i % 5 == 0)  continue;
        }
        if(is_prime(i)) cout << i << "\n";
    }

    return 0;
}