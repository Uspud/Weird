#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int sudoku[9][9];
void up(int y, int x) {
    if(x == 8 && y == 8) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                cout << sudoku[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    }
    else if(x == 8)  solve(y+1, 0);
}

bool check(int* arr) {
    for(int i = 0; i < 9; i++) {
        if(arr[i] > 1) {
            return true;
        }
    }
    return false;
}

void solve(int y, int x) {
    if(sudoku[y][x]) {
        up(y, x);
    }
    else {
        int arr[9], k = 0;

        for(int i = y - y % 3; i < y + 3; i++) {
            for(int j = x - x % 3; j < x + 3; j++) {
                arr[k] = sudoku[i][j];
                k++;
            }
        }

        if(check(arr))  return;
    }
}

int main(void) {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];
        }
    }

    solve(0, 0);

    return 0;
}