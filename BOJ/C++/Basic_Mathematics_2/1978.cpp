#include <iostream>

using namespace std;
/*
�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù �ٿ� ���� ���� N�� �־�����. N�� 100�����̴�. �������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.

�־��� ���� �� �Ҽ��� ������ ����Ѵ�.
*/
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, prime = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, count = 0;

        cin >> a;

        for(int j = 1; j <= a; j++) {
            if(a % j == 0)  count++;
        }

        if(count == 2)  prime++;
    }

    cout << prime;
    
    return 0;
}