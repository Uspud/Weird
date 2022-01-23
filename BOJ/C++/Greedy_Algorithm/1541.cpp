#include <iostream>
#include <algorithm>
#include <vector>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    fastio;

    string s;   cin >> s;

    int length_s = s.size();

    vector<int> var, sym; int start = 0;

    for(int i = 0; i <= length_s; i++) {
        if(s[i] == '+' || s[i] == '-' ) {
            char temp[i - start];
            for(int j = 0; j < i - start; j++) {
                temp[j] = s[start + j];
            }
            var.push_back(stoi(temp));
            sym.push_back(int(s[i]));
            start = i + 1;
        }
        else if(i == length_s) {
            char temp[i - start];
            for(int j = 0; j < i - start; j++) {
                temp[j] = s[start + j];
            }
            var.push_back(stoi(temp));
        }
    }

    int var_size = var.size(), sym_size = sym.size();

    for(int i = 0; i < var_size; i++) {
        cout << var[i] << ' ';
    }

    cout << '\n';

    for(int i = 0; i < sym_size; i++) {
        cout << char(sym[i]) << ' ';
    }

    return 0;
}