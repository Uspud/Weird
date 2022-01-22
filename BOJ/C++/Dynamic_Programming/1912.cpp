#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;

int mem[100000];
int dp[100000];

int main(void) {
    fastio;

    int n;  cin >> n;   int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp = 0;

    if(arr[0] > 0)  dp[0] = arr[0]; else    dp[0] = 0;
    mem[0] = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] >= 0) {   // arr[i]�� ����� ���
            mem[i] = max(dp[i-1] + arr[i], mem[i-1]);
            dp[i] = dp[i-1] + arr[i];
        }
        else {  // arr[i]�� ������ ���
            if(dp[i-1] + arr[i] > 0) { // ���� �ᱣ������ arr[i]�� ���ص� 0�̳� ������ ���� �ʴ´ٸ�
                mem[i] = mem[i-1];
                dp[i] = dp[i-1] + arr[i];
            }
            else {  // ���� �ᱣ������ arr[i]�� ���� �� 0�̳� ������ �Ǿ�����ٸ�
                mem[i] = max(mem[i-1], arr[i]);
                dp[i] = 0;
            }
        }
    }

    // for(int i = 0; i < n; i++) {
    //     cout << mem[i] << " " << dp[i] << "\n";
    // }

    cout << mem[n-1];

    return 0;
}