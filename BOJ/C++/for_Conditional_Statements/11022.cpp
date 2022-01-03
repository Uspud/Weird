#include <iostream>

using namespace std;
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
int main(void) {
    int T;
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;

    int a, b;

    for (int i = 0; i < T; ++i) {
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a+b << "\n"; 
    }
    
    return 0;
}