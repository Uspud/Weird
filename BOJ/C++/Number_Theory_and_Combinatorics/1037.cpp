#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

bool compare(int a, int b)  {
    return a < b;
}

int main(void) {
    fastio;

    int n;  cin >> n;

    int divisor[n], max = 0, min = 1000000;

    for(int i = 0; i < n; i++) {
        cin >> divisor[i];

        if(divisor[i] > max)    max = divisor[i];
        if(divisor[i] < min)    min = divisor[i];
    }    

    cout << max * min;

    return 0;
}