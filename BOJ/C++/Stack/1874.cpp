#include <iostream>
#include <stack>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int main(void) {
    fastio;

    int n;  cin >> n;   int arr[n];

    stack<int> st;

    char result[200002];    int rst_idx = 0;

    for(int i = 0; i < n; i++)  cin >> arr[i];

    int tag = arr[0], start = 0;
    for(int i = 1; i <= n; i++) {
        if(i == tag) {
            st.push(i);
            result[rst_idx++] = '+';
            
            for(int j = start; ; j++) {
                if(st.empty()) {
                    start = j;
                    tag = arr[j];
                    break;
                }
                else if(arr[j] == st.top()) {
                    st.pop();
                    result[rst_idx++] = '-';
                }
                else if(arr[j] != st.top()) {
                    if(arr[j] > st.top()) {
                        start = j;
                        tag = arr[j];
                        break;
                    }
                    else {
                        cout << "NO";
                        return 0;
                    }
                }
            }
        }
        else {
            st.push(i);
            result[rst_idx++] = '+';
        }
    }

    
    for(int i = 0; i < rst_idx; i++)    cout << result[i] << "\n";

    return 0;
}