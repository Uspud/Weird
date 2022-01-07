#include <iostream>

using namespace std;

int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long a, b, v;
    cin >> a >> b >> v;

    long long answer;

    answer = (v-b)/(a-b);

    if((v-b)%(a-b)) {
        answer++;
    }

    cout << answer;
    return 0;
}