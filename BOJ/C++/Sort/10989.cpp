#include <iostream>
#include <array>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기
#define MAX_NUM 10000

using namespace std;

int main(void) {
    fastio;

    int num, input;
    array<int, MAX_NUM+1> count;
    count.fill(0);
    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> input;
        count[input]++;
    }

    for (int i = 0; i < 10001; i++) {
        if (count[i] != 0) {
            for (int j = 0; j < count[i]; j++) {
                cout << i << "\n";
            }
        }
    }
}