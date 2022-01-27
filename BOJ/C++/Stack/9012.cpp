#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;

int main(void) {
    fastio;

    int t;  cin >> t;

    for(int i = 0; i < t; i++) {
        int flag = 0;   string str;
        cin >> str; int size = str.size();

        for(int j = 0; j <= size; j++) {
            if(j == size) {
                if(flag)    cout << "NO\n";
                else    cout << "YES\n";
            }
            else if(str[j] == '(')   flag++;
            else {
                if(flag)    flag--;
                else {
                    cout << "NO\n";
                    break;
                }
            }
        }
    }

    return 0;
}