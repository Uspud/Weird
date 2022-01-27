#include <iostream>
#include <stack>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    while(true) {
        string str; getline(cin, str);

        int size = str.size();

        stack<int> st;
        for(int i = 0; i <= size; i++) {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
                st.push(str[i]);
            }
            else if(str[i] == ')' || str[i] == '}' || str[i] == ']') {
                if(st.empty()) {
                    cout << "no\n";
                    break;
                }
                else {
                    if(str[i] == ')' && st.top == '')
                }
            }
        }
    }

    return 0;
}