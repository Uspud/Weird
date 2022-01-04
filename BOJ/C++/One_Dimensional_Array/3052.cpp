#include <iostream>

using namespace std;
/*
두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 

수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
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