#include <iostream>
#include <cmath>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;
/*
베르트랑 공준은 임의의 자연수 n에 대하여, n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다는 내용을 담고 있다.

이 명제는 조제프 베르트랑이 1845년에 추측했고, 파프누티 체비쇼프가 1850년에 증명했다.

예를 들어, 10보다 크고, 20보다 작거나 같은 소수는 4개가 있다. (11, 13, 17, 19) 또, 14보다 크고, 28보다 작거나 같은 소수는 3개가 있다. (17,19, 23)

자연수 n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오. 

입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 케이스는 n을 포함하는 한 줄로 이루어져 있다.

입력의 마지막에는 0이 주어진다.

각 테스트 케이스에 대해서, n보다 크고, 2n보다 작거나 같은 소수의 개수를 출력한다.
*/
int is_prime(int a) {       //소수 판별. a가 소수일 시 1, 소수가 아닐 시 0
    int num = sqrt(a);

    if(a == 1)  return 0;
    if(num == 1) return 1;
    if(a % 2) {
        for(int i = 2; i <= num; i++) {
            if(a % i == 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int* sieve_of_eratosthenes(int a[], int size) {
    for(int i = 2; i <= size; i++) {
        a[i] = 1;
    }

    for(int i = 2; i <= size; i++) {
        if(a[i] == 0)   continue;

        for(int j=2*i; j <= size; j+=i) {
            a[j] = 0;
        }
    }

    return a;
}

int main(void) {
    fastio;
    int n;

    cin >> n;

    int size = 246913;
    int array[246913];

    int *ptr = sieve_of_eratosthenes(array, size);

    while(n != 0) {
        int count = 0;
        for(int i = n + 1; i <= 2 * n; i++) {
            if(ptr[i]) {
                count++;
            }
        }
        cout << count << "\n";

        cin >> n;
    }

    return 0;
}