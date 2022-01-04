#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
/*
� ���� ���� X�� �� �ڸ��� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�. ���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�. N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
*/
int is_hansu(int input) {
    if(input < 100) {
        return 1;
    }
    int flag = 0, temp = input;

    while(temp > 0) {
        temp = int(temp/10);
        flag++;
    }

    int num, array[flag];
    for(int i = 0; i < flag; i++) {
        num = pow(10, i);
        array[flag-i-1] = input % (num * 10) / num; 

    }

    for(int i = 0; i < flag-2; i++) {
        if(array[i+1] - array[i] != array[i+2] - array[i+1]) return 0;
    }

    return 1;
}
int main(void) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, num_of_hansu = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if(is_hansu(i)) num_of_hansu++;
    }

    cout << num_of_hansu;

    return 0;
}