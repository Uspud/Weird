#include <iostream>
#include <stack>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main(void) {
    fastio;

    int k;  cin >> k;

    stack<int> st;

    for(int i = 0; i < k; i++) {
        int a;  cin >> a;
        if(!a)  st.pop();
        else    st.push(a);
    }
    int size = st.size(), result = 0;

    for(int i = 0; i < size; i++) {
        result += st.top();
        st.pop();
    }

    cout << result;

    return 0;
}