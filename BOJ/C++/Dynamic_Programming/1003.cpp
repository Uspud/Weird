#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[41];

int fib(int n) {
    if(n == 0)  return 0;
    if(n == 1)  return 1;
    if(mem[n] != 0) return mem[n];
    mem[n] = fib(n-1) + fib(n-2);
    return mem[n];
}

int main(void) {
    fastio;
    int t;  cin >> t;

    int n;

    for(int i = 0; i < t; i++) {
        cin >> n;

        if(n == 0) {
            cout << "1 0 \n";
        }
        else {
            cout << fib(n-1) << " " << fib(n) << "\n";
        }
    }

    return 0;
}