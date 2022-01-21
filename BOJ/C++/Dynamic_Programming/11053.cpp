#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[1001];
int a[1001];

int main(void) {
    fastio;

    int n;  cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int max = 0;
    for(int i = 1; i <= n; i++) {
        int min = 0;
        for(int j = 0; j < i; j++) {
            if(a[i] > a[j])     if(min < mem[j])    min = mem[j];
        }
        mem[i] = min + 1;
        if(max < mem[i])    max = mem[i];
    }

    cout << max;

    return 0;
}