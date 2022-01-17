#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[51][51][51];

int w(int a, int b, int c) {
    if(a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    if(a > 20 || b > 20 || c > 20) {
        return w(20, 20, 20);
    }
    if(mem[a][b][c] != 0) {
        return mem[a][b][c];
    }
    if(a < b && b < c) {
        mem[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
        return mem[a][b][c];
    }
    else {
        mem[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
        return mem[a][b][c];
    }
}

int main(void) {
    fastio;
    
    int a, b, c;

    while(1) {
        cin >> a >> b >> c;

        if(a == -1 && b == -1 && c == -1) {
            break;
        }
        if(a <= 0 || b <= 0 || c <= 0) {
            cout << "w(" << a << ", " << b << ", " << c << ") = 1\n";
            continue;
        }
        else {
            cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
        }
    }

    return 0;
}