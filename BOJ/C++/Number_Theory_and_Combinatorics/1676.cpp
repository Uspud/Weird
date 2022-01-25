#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int two, five;

int divide_by_two (int a) {
    if(!(a % 2)) {
        a /= 2;
        two++;
        a = divide_by_two(a);
    }
    return a;
}

int divide_by_five (int a) {
    if(!(a % 5)) {
        a /= 5;
        five++;
        a = divide_by_five(a);
    }
    return a;
}

int main(void) {
    fastio;

    int n;  cin >> n;

    int num;
    for(int i = 2; i <= n; i++) {
        num = i;

        num = divide_by_two(num);
        num = divide_by_five(num);
    }



    return 0;
} 