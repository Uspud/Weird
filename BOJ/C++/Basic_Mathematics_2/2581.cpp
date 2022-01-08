#include <iostream>
#include <cmath>

using namespace std;
/*
자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.

예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최솟값은 61이 된다.

입력의 첫째 줄에 M이, 둘째 줄에 N이 주어진다.

M과 N은 10,000이하의 자연수이며, M은 N보다 작거나 같다.

M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다. 

단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력한다.
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