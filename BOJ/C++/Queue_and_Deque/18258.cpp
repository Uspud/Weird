#include <iostream>
#include <cstring>
#include <queue>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    queue<int> q;

    int k;  cin >> k;
    cin.ignore();

    for(int i = 0; i < k; i++) {
        string str; getline(cin, str);

        if(!strncmp(str.c_str(), "push ", 5)) {
            q.push(stoi(str.substr(5).c_str()));
        }
        if(!strcmp(str.c_str(), "pop")) {
            if(q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        if(!strcmp(str.c_str(), "front")) {
            if(q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << q.front() << "\n";
            }
        }
        if(!strcmp(str.c_str(), "back")) {
            if(q.empty()) {
                cout << "-1\n";
            }
            else {
                cout << q.back() << "\n";
            }
        }
        if(!strcmp(str.c_str(), "size")) {
            cout << q.size() << "\n";
        }
        if(!strcmp(str.c_str(), "empty")) {
            cout << q.empty() << "\n";
        }
    }

    return 0;
}