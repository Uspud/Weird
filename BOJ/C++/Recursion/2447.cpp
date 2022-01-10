#include <iostream>
#include <cmath>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;
/*
재귀적인 패턴으로 별을 찍어 보자. N이 3의 거듭제곱(3, 9, 27, ...)이라고 할 때, 크기 N의 패턴은 N×N 정사각형 모양이다.

크기 3의 패턴은 가운데에 공백이 있고, 가운데를 제외한 모든 칸에 별이 하나씩 있는 패턴이다.

***
* *
***
N이 3보다 클 경우, 크기 N의 패턴은 공백으로 채워진 가운데의 (N/3)×(N/3) 정사각형을 크기 N/3의 패턴으로 둘러싼 형태이다. 예를 들어 크기 27의 패턴은 예제 출력 1과 같다.

첫째 줄에 N이 주어진다. N은 3의 거듭제곱이다. 즉 어떤 정수 k에 대해 N=3k이며, 이때 1 ≤ k < 8이다.

첫째 줄부터 N번째 줄까지 별을 출력한다.
*/
void print(int i, int j, int n) {
    int flag = 1;
    for(int k = 1; k < n; k *= 3){
        if(int(ceil(float(i)/float(k))) % 3 == 2 && int(ceil(float(j)/float(k))) % 3 == 2) {
            cout << " ";
            flag = 0;
            break;
        }
    }

    if (flag) {
        cout << "*";
    }
    if(i == n && j == n) return;
    if(j == n) {
        cout << "\n";
        print(i+1, 1, n);
    }
    else {
        print(i, j+1, n);
    }
}

int main(void) {
    fastio;

    int n;
    cin >> n;

    print(1,1,n);

    return 0;
}