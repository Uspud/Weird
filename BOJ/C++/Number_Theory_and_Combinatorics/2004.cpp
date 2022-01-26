#include <iostream>
#include <cmath>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int init_five(int a) {
    int result = 0;
    for(int i = 1; ; i++) {
        if(a / int(pow(5,i)))    result += a / int(pow(5,i));
        else                break;
    }

    return result;
}

int init_two(int a) {
    int result = 0;
    for(int i = 1; ; i++) {
        if(a / int(pow(2,i)))   result += a / int(pow(2,i));
        else                    break;
    }

    return result;
}

int main(void) {
    fastio;

    int n, m;   cin >> n >> m;

    cout << min((init_two(n) - (init_two(m) + init_two(n-m))), (init_five(n) - (init_five(m) + init_five(n-m))));

    return 0;
}