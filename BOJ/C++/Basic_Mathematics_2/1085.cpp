#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

/*
한수는 지금 (x, y)에 있다. 직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다. 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.

첫째 줄에 x, y, w, h가 주어진다.

첫째 줄에 문제의 정답을 출력한다.

1 ≤ w, h ≤ 1,000
1 ≤ x ≤ w-1
1 ≤ y ≤ h-1
x, y, w, h는 정수
*/

int main(void) {
    fastio;

    int x, y, w, h;

    cin >> x >> y >> w >> h;

    int dist_x, dist_y;

    if(w/2 - x < 0) dist_x = w - x;
    else    dist_x = x;

    if(h/2 - y < 0) dist_y = h - y;
    else dist_y = y;

    if(dist_x > dist_y) cout << dist_y;
    else    cout << dist_x;

    return 0;
}