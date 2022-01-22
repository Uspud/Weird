#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int mem[101];

typedef struct line{
    int x;
    int y;
}   line;

line arr[101];

bool compare(line a, line b) {
    return a.x < b.x;
}

int main(void) {
    fastio;

    int n;  cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i].x >> arr[i].y;
    }

    // cout << "\n\n\n";

    sort(arr+1, arr+n+1, compare);

    // for(int i = 1; i <= n; i++) {
    //     cout << arr[i].x << " " << arr[i].y << "\n";
    // }
    int max = 0;
    for(int i = 1; i <= n; i++) {
        int min = 0;
        for(int j = 0; j < i; j++) {
            if(arr[i].y > arr[j].y) if(min < mem[j])    min = mem[j];
        }
        mem[i] = min + 1;

        if(max < mem[i])    max = mem[i];
    }

    cout << n - max;

    return 0;
}