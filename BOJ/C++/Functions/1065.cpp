#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
/*
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
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