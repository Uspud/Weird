#include <iostream>

using namespace std;

// n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main (void) {
    int n, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        sum += i + 1;
    }

    cout << sum << endl;

    return 0;
}