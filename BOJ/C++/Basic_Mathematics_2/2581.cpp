#include <iostream>
#include <cmath>

using namespace std;
/*
�ڿ��� M�� N�� �־��� �� M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ��� �̵� �Ҽ��� �հ� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.

���� ��� M=60, N=100�� ��� 60�̻� 100������ �ڿ��� �� �Ҽ��� 61, 67, 71, 73, 79, 83, 89, 97 �� 8���� �����Ƿ�, �̵� �Ҽ��� ���� 620�̰�, �ּڰ��� 61�� �ȴ�.

�Է��� ù° �ٿ� M��, ��° �ٿ� N�� �־�����.

M�� N�� 10,000������ �ڿ����̸�, M�� N���� �۰ų� ����.

M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ã�� ù° �ٿ� �� ����, ��° �ٿ� �� �� �ּڰ��� ����Ѵ�. 

��, M�̻� N������ �ڿ��� �� �Ҽ��� ���� ���� ù° �ٿ� -1�� ����Ѵ�.
*/
int is_prime(int a) {
    int count = 0;

    if(a == 1) return 0;
    
    for(int i = 2; i <= sqrt(a); i++) {
        if(a % i == 0) {
            count++;
        }
    }

    if(!count)  return 1;

    return 0;
}
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int m, n, count = 0, min, sum = 0;

    cin >> m >> n;

    for(int i = m; i <= n; i++) {
        if(is_prime(i)) { 
            if(!count) {
                min = i;
                count = 1;
            }
            sum += i;
        }
    }

    if(count == 0) {
        cout << "-1";
        return 0;
    }
    cout << sum << "\n" << min;

    return 0;
}