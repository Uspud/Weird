#include <iostream>
#include <deque>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    int t;  cin >> t;

    while(t--) {
        string p;   cin >> p;
        int n;      cin >> n;
        string arr; cin >> arr;
        deque<int> dq;

        int size = arr.size();

        char num[4];    int index = 0;
        for(int i = 0; i < size; i++) {
            if(arr[i] >= '0' && arr[i] <= '9') {
                num[index++] = arr[i];
            }
            else if(arr[i] == ',' || arr[i] == ']' && index > 0) {
                num[index] = '\0';
                dq.push_back(stoi(num));
                index ^= index;
            }
        }

        size = p.size();
        bool rev = false, error_flag = false;
        for(int i = 0; i < size; i++) {
            if(p[i] == 'R') {
                rev = !rev;
            }
            if(p[i] == 'D') {
                if(dq.empty()) {
                    error_flag = true;
                    cout << "error\n";
                    break;
                }
                else if(rev) {
                    dq.pop_back();
                }
                else {
                    dq.pop_front();
                }
            }
        }
        
        size = dq.size();
        if(!error_flag) {
            if(!size) {
                cout << "[]\n";
            }
            else {
            cout << '[';
                if(rev) {
                    while(size != 1) {
                        cout << dq.back() << ',';
                        dq.pop_back();
                        size--;
                    }
                    cout << dq.back() << "]\n";
                }
                else {
                    while(size != 1) {
                        cout << dq.front() << ",";
                        dq.pop_front();
                        size--;
                    }
                    cout << dq.front() << "]\n";
                }
            }
        }
    }

    return 0;
} 