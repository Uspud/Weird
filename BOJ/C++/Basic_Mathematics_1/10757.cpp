#include <iostream>
#include <string>

using namespace std;
/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

첫째 줄에 A와 B가 주어진다. (0 < A,B < 10^10000)

첫째 줄에 A+B를 출력한다.
*/
int main(void) {
    string a, b;

    char c[10002];

    for (int i = 0; i < 10002; i++) {
        c[i] = -1;
    }

    cin >> a >> b;

    int a_length = a.length(), b_length = b.length(), temp;

    for(int i = 0;; i++) {
        if (a_length <= i && b_length <= i) {
            if (c[i] == 0) c[i] = 1;
            break;
        }
        else if (a_length <= i) temp = b[b_length - i - 1] - 48;
        else if (b_length <= i) temp = a[a_length - i - 1] - 48;
        else temp = a[a_length - i - 1] - 48 + b[b_length - i - 1] - 48;

        if(temp >= 10) {
            c[i+1] += 1;
            c[i] += temp - 10 + 1; 
        }
        else {
            if ( c[i] == 0 && temp == 9) {
                c[i+1] += 1;
                c[i] = 0;
            }
            else c[i] += temp + 1;
        }
    }
    
    int c_length = 0;
    for(int i = 0; ;i++) {
        if(c[i] == -1) {
            c_length = i;
            break;
        }
    }
    
    char final[c_length + 1];

    for(int i = 0; i < c_length; i++) {
        final[i] = c[c_length - i - 1] + 48;
    }

    final[c_length] == 0;

    cout << final;

    return 0;
}