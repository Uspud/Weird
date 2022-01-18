#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

// 코드 자체는 백준에서 pass가 되었으나, 직접 실행시 데이터 영역 오류로 에러를 내뿜었음.

int mem[1000001];

int n;

int fib(int k) {
    if(k <= 1)  return k;
    if(mem[k] == 15746) {
        return 0;
    }
    if(mem[k] != 0) {
        return mem[k];
    }
    mem[k] = fib(k-1) + fib(k-2);
    if(mem[k] > 15746) {
        mem[k] %= 15746;
    }
    if(mem[k] == 15746) {
        return 0;
    }
    return mem[k];
}

int main(void) {
    fastio;

    cin >> n;

    int result;

    result = fib(n + 1);

    cout << result;

    return 0;
}