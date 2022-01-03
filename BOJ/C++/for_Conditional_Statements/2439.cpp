#include <iostream>

using namespace std;
/*
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
*/
int main(void){
    int n;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}