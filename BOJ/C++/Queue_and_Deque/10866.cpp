#include <iostream>
#include <deque>
#include <cstring>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main(void) {
    fastio;

    deque<int> dq;

    int n;  cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        string str;

        getline(cin, str);

        if(!strncmp(str.c_str(), "push_back ", 9)) {
            dq.push_back(stoi(str.substr(9).c_str()));
        }
        if(!strncmp(str.c_str(), "push_front ", 9)) {
            dq.push_front(stoi(str.substr(10).c_str()));
        }
        if(!strcmp(str.c_str(), "pop_front")) {
            if(dq.empty())  cout << "-1\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        if(!strcmp(str.c_str(), "pop_back")) {
            if(dq.empty())  cout << "-1\n";
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        if(!strcmp(str.c_str(), "size")) {
            cout << dq.size() << "\n";
        }
        if(!strcmp(str.c_str(), "empty")) {
            cout << dq.empty() << "\n";
        }
        if(!strcmp(str.c_str(), "front")) {
            if(dq.empty())  cout << "-1\n";
            else    cout << dq.front() << "\n";
        }
        if(!strcmp(str.c_str(), "back")) {
            if(dq.empty())  cout << "-1\n";
            else    cout << dq.back() << "\n";
        }
    }
    
    return 0;
}