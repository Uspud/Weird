#include <iostream>

using namespace std;
/*
�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�. 

�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main(void) {
    int algebra[42] = { 0, }, input[10], i, num, sum = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    for(int i = 0; i < 10; i++){
        cin >> input[i];
    }
    for(int i = 0; i < 10; i++){
       num = input[i] % 42;

       algebra[num] = 1;
    }

    for(int i = 0; i < 42; i++){
        if(algebra[i] == 1) sum++;
    }

    cout << sum;

    return 0;
}