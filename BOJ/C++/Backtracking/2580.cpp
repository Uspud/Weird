#include <iostream>

using namespace std;

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

const int MAX = 9;

int sudoku[MAX][MAX];
bool row[MAX][MAX + 1];
bool col[MAX][MAX + 1];
bool box[MAX][MAX + 1];

void solve(int k) {
    if(k == 81) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                cout << sudoku[i][j] << " ";
            }
            cout << "\n";
        }
        exit(0);
    }

    int x = k % 9, y = k / 9;
    
    if(sudoku[y][x])    solve(k + 1);
    else {
        for(int i = 1; i <= MAX; i++) {
            if(!col[x][i] && !row[y][i] && !box[y/3*3+x/3][i]) {
                sudoku[y][x] = i;
                col[x][i] = true;
                row[y][i] = true;
                box[y/3*3+x/3][i] = true;
                solve(k + 1);
                sudoku[y][x] = 0;
                col[x][i] = false;
                row[y][i] = false;
                box[y/3*3+x/3][i] = false;
            }
        }
    }
}

int main(void) {
    fastio;

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];

            if(sudoku[i][j]) {
                row[i][sudoku[i][j]] = true;
                col[j][sudoku[i][j]] = true;
                box[i/3*3 + j/3][sudoku[i][j]] = true;
            }
        }
    }

    solve(0);

    return 0;
}