#include <iostream>
#include <stack>
#include <cstring>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    while(true) {
        string str; getline(cin, str);

        if(!strcmp(str.c_str(), "."))   return 0;
        int size = str.size();

        stack<int> st;
        for(int i = 0; i <= size; i++) {
            if(i == size) {
                if(st.size()) cout << "no\n";
                else    cout << "yes\n";
                break;
            }
            
            if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
                st.push(str[i]);
            }
            else if(str[i] == ')') {
                if(st.empty()) { 
                    cout << "no\n";
                    break;
                }
                else if(st.top() == '(')    st.pop();
                else {
                    cout << "no\n";
                    break;
                }
            }
            else if(str[i] == '}') {
                if(st.empty()) { 
                    cout << "no\n";
                    break;
                }
                else if(st.top() == '{')    st.pop();
                else {
                    cout << "no\n";
                    break;
                }
            }
            else if(str[i] == ']') {
                if(st.empty()) { 
                    cout << "no\n";
                    break;
                }
                else if(st.top() == '[')    st.pop();
                else {
                    cout << "no\n";
                    break;
                }
            }
        }
    }
}