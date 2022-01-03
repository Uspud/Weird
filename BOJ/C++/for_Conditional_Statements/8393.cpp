#include <iostream>

using namespace std;

// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

int main (void) {
    int n, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        sum += i + 1;
    }

    cout << sum << endl;

    return 0;
}