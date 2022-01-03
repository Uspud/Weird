#include <iostream>

using namespace std;
/*
첫째 줄에 다음 세 가지 중 하나를 출력한다.

A가 B보다 큰 경우에는 '>'를 출력한다.
A가 B보다 작은 경우에는 '<'를 출력한다.
A와 B가 같은 경우에는 '=='를 출력한다.
*/
int main(void) {
    int a, b;

    cin >> a >> b;

    if(a > b) {
        cout << ">" << endl;
    }
    else if (a < b){
        cout << "<" << endl;
    }
    else {
        cout << "==" << endl;
    }

    return 0;
}