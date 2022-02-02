#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    int n, m, k;   cin >> n >> m;
    int arr_1[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr_1[i][j];
        }
    }

    cin >> m >> k;
    int arr_2[m][k];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            cin >> arr_2[i][j];
        }
    }

    int arr_3[n][k];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            arr_3[i][j] = 0;
            for(int x = 0; x < m; x++) {
                arr_3[i][j] += arr_1[i][x] * arr_2[x][j];
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cout << arr_3[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}