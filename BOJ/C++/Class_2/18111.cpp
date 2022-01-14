#include <iostream>
#include <algorithm>
#include <vector>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;
/*
����
�� �������Ʈ�� ��ȸ �غ� �ϴٰ� ���������� ����ڽ� ������ ������ũ����Ʈ���� �״�. ����ũ����Ʈ�� 1 �� 1 �� 1(����, ����, ����) ũ���� ��ϵ�� �̷���� 3���� ���迡�� �����Ӱ� ���� �İų� ���� ���� �� �ִ� �����̴�.

���縦 ����� ���� lvalue�� ���� ����� �Ͽ���. ������ ���� ���� ������ ���� ���� �� ���� ������ ���� ���̸� ��� �����ϰ� ����� ���� ���⡯ �۾��� �ؾ� �Ѵ�.

lvalue�� ���� N, ���� M ũ���� ���͸� �����. ���� �� ���� ���� ��ǥ�� (0, 0)�̴�. �츮�� ������ �� ���� ���� ���� ���̸� �����ϰ� �ٲٴ� ���̴�. �츮�� ������ ���� �� ������ �۾��� �� �� �ִ�.

��ǥ (i, j)�� ���� ���� �ִ� ����� �����Ͽ� �κ��丮�� �ִ´�.
�κ��丮���� ��� �ϳ��� ������ ��ǥ (i, j)�� ���� ���� �ִ� ��� ���� ���´�.
1�� �۾��� 2�ʰ� �ɸ���, 2�� �۾��� 1�ʰ� �ɸ���. �㿡�� ������ ���͵��� ������ ������ �ִ��� ���� �� ���� �۾��� ���ľ� �Ѵ�. ���� ���⡯ �۾��� �ɸ��� �ּ� �ð��� �� ��� ���� ���̸� ����Ͻÿ�.

��, ���� �Ʒ��� ���� �� �� ������ �������� ������, ���� �ٱ����� ����� ������ �� ����. ����, �۾��� ������ �� �κ��丮���� B���� ����� ��� �ִ�. ���� ���̴� 256����� �ʰ��� �� ������, ������ �� �� ����.

�Է�
ù° �ٿ� N, M, B�� �־�����. (1 �� M, N �� 500, 0 �� B �� 6.4 �� 107)

��° �ٺ��� N���� �ٿ� ���� M���� ������ ���� ���̰� �־�����. (i + 2)��° ���� (j + 1)��° ���� ��ǥ (i, j)������ ���� ���̸� ��Ÿ����. ���� ���̴� 256���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�.

���
ù° �ٿ� ���� ���� �� �ɸ��� �ð��� ���� ���̸� ����Ͻÿ�. ���� ���� �� �ִٸ� ���߿��� ���� ���̰� ���� ���� ���� ����Ͻÿ�.
*/
bool compare(int a, int b) {
    return a > b;
}
int main(void) {
    fastio;

    int n, m, b;    cin >> n >> m >> b;
    int org = b;

    int world;
    vector<int> height;

    for(int i = 0; i < m * n; i++) {
        cin >> world;
        height.push_back(world);
//            cout << height[i*3+j] << "," << world[i][j] << " ";
    }

    sort(height.begin(), height.end(), compare);

    vector<int> base;
    int i = 1;


    int size_height = height.size();

    for(int i = 0; i < size_height; i++) {
        if(height[i] <= 256 && height[i] >= 0) {
            if(i == 0) {
                base.push_back(height[i]);
            }
            else if(height[i-1] != height[i]) {
                base.push_back(height[i]);
            }
        }
    }

    int size_base = base.size();
    int min = 210000000, time = 0, flag;

    for(int i = 0; i < size_base; i++) {
        for(int j = 0; j < size_height; j++) {
            if(height[j] - base[i] > 0) {
                time += (height[j] - base[i]) * 2;
                b += (height[j] - base[i]);
            }
            else if(height[j] - base[i] < 0) {
                time += (base[i] - height[j]);
                b -= base[i] - height[j];
            }
        }

        if(b >= 0) {
            if(min > time) {
                min = time;
                flag = base[i];
            }
            else if(min == time) {
                if(flag < base[i]) {
                    flag = base[i];
                }
            }
        }
        time = 0;
        b = org;
    }

    cout << min << " " << flag;
    
    return 0;
}