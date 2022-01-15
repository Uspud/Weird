#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기
/*
문제
백준 온라인 저지의 신년대회 Hello, BOJ 2022!의 개최일은 2022년 1월 15일이다. 준겸이는 대회가 개최된다는 사실이 기뻐 제목을 뚫어져라 보다가 2022가 무언가 특별하다는 사실을 깨달았다.

그렇다. $2022$를 $5$진법으로 표현하면 ${31042}_{(5)}$로, $5$진법의 각 숫자인 $0$, $1$, $2$, $3$, $4$가 모두 한 번씩 나타난다. 다음에 이런 년도가 오려면 2054년이 되어야 한다.

수 $N$과 진법 $d$가 주어진다. 당신은 수 $N$보다 크면서, $d$진법으로 표현했을 때 $d$진법의 숫자가 모두 정확히 한 번씩 등장하는 가장 작은 수를 찾아야 한다. 단, 수를 표기할 때는 앞에 불필요한 0이 존재해서는 안 된다.

입력
첫 번째 줄에 수 $N$과 진법 $d$가 공백을 사이에 두고 $10$진법으로 주어진다.

출력
첫 번째 줄에 $N$보다 크면서 $d$진법으로 표현했을 때 $d$진법의 숫자가 모두 정확히 한 번씩 등장하는 수 중 가장 작은 것을 $10$진법으로 출력한다.

만약 그런 수가 존재하지 않는다면, 첫 번째 줄에 $-1$을 대신 출력한다.
*/
int main(void) {
    fastio;

    int n, d;   cin >> n >> d;
    
    vector<int> arr(d);

    int list = 0;

    if(n + 1 <= pow(d,d-1))   n = pow(d, d-1) - 1;

    for(int i = 0; i < d; i++)  arr[i] = i;

    do {
        int j = d-1;
        for (int i = 0; i < d; i++) {
            list += arr[i] * pow(d, j);
            j--;
        }

        if(list >= n + 1) {
            cout << list;
            return 0;
        }

        list = 0;
    }while(next_permutation(arr.begin(), arr.end()));

    cout << -1;
    return 0;
}