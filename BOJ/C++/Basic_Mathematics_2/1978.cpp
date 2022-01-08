#include <iostream>

using namespace std;
/*
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

주어진 수들 중 소수의 개수를 출력한다.
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