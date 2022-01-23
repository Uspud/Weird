#include <iostream>
#include <vector>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

bool flag;
int ans;

int main(void) {
    fastio;

    string s;   cin >> s;

    int length_s = s.size();

    vector<int> var; int start = 0;

    for(int i = 0; i <= length_s; i++) {
        if(s[i] == '+' || s[i] == '-' || i == length_s) {
            char temp[i - start+1];
            for(int j = 0; j <= i - start; j++) {
                temp[j] = s[start + j];
            }
            temp[i-start] = '\0';
            if(flag)    var.push_back(-1 * stoi(temp));
            else        var.push_back(stoi(temp));
            start = i + 1;
            if(s[i] == '-' && !flag) flag = !flag;
        }
    }

    int var_size = var.size();

    // for(int i = 0; i < var_size; i++)   cout << var[i] << ' ';
    
    for(int i = 0; i < var_size; i++)   ans += var[i];

    cout << ans;

    return 0;
}