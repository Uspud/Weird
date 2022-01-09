#include <iostream>
#include <cmath>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;
/*
���� ����Ʈ�ε��� �� ������ ���̰� 3, 4, 5�� �ﰢ���� ���� �ﰢ���ΰ��� �˾Ƴ´�. �־��� ������ ���̷� �ﰢ���� �������� �ƴ��� �����Ͻÿ�.

�Է��� �������� �׽�Ʈ���̽��� �־����� �������ٿ��� 0 0 0�� �Էµȴ�. �� �׽�Ʈ���̽��� ��� 30,000���� ���� ���� ������ �־�����, �� �Է��� ���� ���̸� �ǹ��Ѵ�.

�� �Է¿� ���� ���� �ﰢ���� �´ٸ� "right", �ƴ϶�� "wrong"�� ����Ѵ�.
*/
int main(void) {
    fastio;

    int x, y, z;
    while(true) {
        cin >> x >> y >> z;
        if(x == 0 && y == 0 && z == 0)    break;

        if(pow(x,2) + pow(y,2) == pow(z,2) || pow(x,2) + pow(z,2) == pow(y,2) || pow(y,2) + pow(z,2) == pow(x,2)) cout << "right" << "\n";
        else    cout << "wrong" << "\n";
    }

    return 0;
}