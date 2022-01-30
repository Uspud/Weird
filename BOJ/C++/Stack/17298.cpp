#include <iostream>
#include <stack>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int main(void) {
    fastio;

    int n;  cin >> n;

    stack<int> st;

    int a[n], b[n];
    for(int i = 0; i < n; i++)  cin >> a[i];

    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && st.top() <= a[i])  st.pop();

        if(st.empty())  b[i] = -1;
        else b[i] = st.top();

        st.push(a[i]);
    }

    for(int i = 0; i < n; i++)  cout << b[i] << " ";

    return 0;
}