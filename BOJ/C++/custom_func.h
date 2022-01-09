#include <iostream>
#include <cmath>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

int is_prime(int a) {       //소수 판별. a가 소수일 시 1, 소수가 아닐 시 0
    int num = sqrt(a);

    if(a == 1)  return 0;
    if(num == 1 && a != 0) return 1;
    if(a % 2) {
        for(int i = 2; i <= num; i++) {
            if(a % i == 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int* sieve_of_eratosthenes(int a[], int size) { // 입력으로 배열, 배열 크기를 받음
    for(int i = 2; i <= size; i++) {
        a[i] = 1;
    }

    for(int i = 2; i <= size; i++) {
        if(a[i] == 0)   continue;

        for(int j=2*i; j <= size; j+=i) {
            a[j] = 0;
        }
    }

    return a;
}

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