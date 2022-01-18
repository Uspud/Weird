#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;

// �ڵ� ��ü�� ���ؿ��� pass�� �Ǿ�����, ���� ����� ������ ���� ������ ������ ���վ���.

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