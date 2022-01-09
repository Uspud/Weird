#include <iostream>
#include <cmath>

using namespace std;
/*
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.

한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.
*/
int is_prime(int a) {       //소수 판별. a가 소수일 시 1, 소수가 아닐 시 0
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