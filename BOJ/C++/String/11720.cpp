#include <iostream>

using namespace std;
// N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, sum = 0;

    cin >> n;

    char a[n+1];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        
        sum += a[i] - 48;
    }

    cout << sum;

    return 0;
}