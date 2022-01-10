#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

void quick_sort(int a[], int start, int end) {
    if(start >= end) {          // 요소가 1개인 경우
        return;
    }

    int pivot = start;
    int i = pivot + 1;  // 왼쪽 출발 지점
    int j = end;    // 오른쪽 출발 지점
    int temp;

    while(i <= j) {
        // 포인터가 엇갈릴때 까지
        while (i <= end && a[i] >= a[pivot]){
            i++;
        }
        while(j > start && a[j] <= a[pivot]) {
            j--;
        }

        if(i > j) {
            // i가 j보다 오른쪽으로 갈 경우
            temp = a[j];
            a[j] = a[pivot];
            a[pivot] = temp;
        }else{
            // i번째와 j번째를 스왑
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // 분할 계산
    quick_sort(a, start, j-1);
    quick_sort(a, j + 1, end);
}

void reverse_quick_sort(int a[], int start, int end) {
    if(start >= end) {          // 요소가 1개인 경우
        return;
    }

    int pivot = start;
    int i = pivot + 1;  // 왼쪽 출발 지점
    int j = end;    // 오른쪽 출발 지점
    int temp;

    while(i <= j) {
        // 포인터가 엇갈릴때 까지
        while (i <= end && a[i] <= a[pivot]){
            i++;
        }
        while(j > start && a[j] >= a[pivot]) {
            j--;
        }

        if(i > j) {
            // i가 j보다 오른쪽으로 갈 경우
            temp = a[j];
            a[j] = a[pivot];
            a[pivot] = temp;
        }else{
            // i번째와 j번째를 스왑
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // 분할 계산
    quick_sort(a, start, j-1);
    quick_sort(a, j + 1, end);
}

int main(void) {
    fastio;

    int N;
    cin >> N;

    int x[N], y[N], height[N], weight[N], x_order[N], y_order[N], order[N];

    for(int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        weight[i] = x[i];
        height[i] = y[i];

        x_order[i] = 0;
        y_order[i] = 0;
        order[i] = 0;
    }

    quick_sort(weight, 0, N-1);
    quick_sort(height, 0, N-1);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(weight[i] == x[j] && x_order[j] == 0) {
                x_order[j] = i+1;
            }
            if(height[i] == y[j] && y_order[j] == 0) {
                y_order[j] = i+1;
            }
        }
        cout << weight[i] << " " << height[i] << "\n";
    }

    int sum[N], sum_order[N];

    for(int i = 0; i < N; i++) {
        sum[i] = x_order[i] + y_order[i]; 
        sum_order[i] = x_order[i] + y_order[i];
    }

    reverse_quick_sort(sum_order, 0, N-1);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(sum_order[i] == sum[j] && order[j] == 0) {
                order[j] = i+1;
            }
        }
    }

    for(int i = 0; i < N; i++) {
        cout << order[i] << " ";
    }

    return 0;
}