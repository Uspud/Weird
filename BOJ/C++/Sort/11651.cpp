#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

typedef struct location {
    int x;
    int y;
} location;

bool compare(location a, location b) {
    if(a.y == b.y) {
        return a.x < b.x;
    }
    return a.y < b.y;
}

int main(void) {
    fastio;

    int n; cin >> n;

    location point[n];

    for(int i = 0; i < n; i++) {
        cin >> point[i].x >> point[i].y;
    }

    sort(point, point + n, compare);

    for(int i = 0; i < n; i++) {
        cout << point[i].x << " " << point[i].y << "\n";
    }

    return 0;
}