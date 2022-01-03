#include <iostream>

using namespace std;
/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
*/
int main(void) {
    int T, i;
    cin >> T;
    
    int a[T], b[T];

    for (i = 0; i < T; i++) {
        cin >> a[i] >> b[i];
        
    }
    for (i = 0; i < T; i++) {
        cout << a[i] + b[i] << endl;
    }

    return 0;
}