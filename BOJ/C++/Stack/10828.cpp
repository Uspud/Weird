#include <iostream>
#include <stack>
#include <cstring>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    stack<int> st;

    int n;  cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        string s;

        getline(cin, s);

        if(!strncmp(s.c_str(), "push ", 5)) st.push(stoi(s.substr(5)));
        else if(!strncmp(s.c_str(), "pop", 3)) {
            if(st.empty())   cout << -1 << "\n";
            else {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if(!strncmp(s.c_str(), "size", 4)) cout << st.size() << "\n";
        else if(!strncmp(s.c_str(), "empty", 5))    cout << st.empty() << "\n";
        else {
            if(st.empty())   cout << -1 << "\n";
            else    cout << st.top() << "\n";
        }
    }

    return 0;
}