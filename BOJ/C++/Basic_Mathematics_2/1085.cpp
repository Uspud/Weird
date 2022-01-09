#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;

/*
�Ѽ��� ���� (x, y)�� �ִ�. ���簢���� �� ���� ��ǥ�࿡ �����ϰ�, ���� �Ʒ� �������� (0, 0), ������ �� �������� (w, h)�� �ִ�. ���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� x, y, w, h�� �־�����.

ù° �ٿ� ������ ������ ����Ѵ�.

1 �� w, h �� 1,000
1 �� x �� w-1
1 �� y �� h-1
x, y, w, h�� ����
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