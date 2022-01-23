#include <iostream>
#include <algorithm>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

typedef struct meet {
    int start;
    int end;
}   meet;

meet meeting[100000];

bool compare(meet a, meet b) {
    if(a.end == b.end) {
        return a.start < b.start;
    }
    return a.end < b.end;
}

int main(void) {
    fastio;

    int n;  cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> meeting[i].start >> meeting[i].end;
    }

    sort(meeting, meeting + n, compare);

    // for(int i = 0; i < n; i++)  cout << meeting[i].start << " " << meeting[i].end << "\n";

    int count = 0, target = 0;

    for(int i = 0; i < n; i++) {
        if(meeting[i].start >= target) {
            target = meeting[i].end;
            count++;
        }
    }

    cout << count;

    return 0;
}