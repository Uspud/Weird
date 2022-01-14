#include <iostream>
#include <cmath>
#include <array>
#include <vector>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

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

//합치기
void merge(int list[], int l, int m, int r)
{
	int i, j, k;
	i = l;
	j = m + 1;
	k = l;
	int temp[11];
	//왼쪽에서 정렬된 배열과 오른쪽에서 정렬된 배열을 합침
	//둘중 하나가 끝까지 올때 까지 합침
	while (i <= m && j <= r)
	{
		if (list[i] <= list[j])
			temp[k++] = list[i++];
		else
			temp[k++] = list[j++];
	}
	//오른쪽 배열에 임시 배열로 추가할 수가 남았으면 오른쪽 배열을 임시 배열로 복사
	if (i > m)
	{
		for (int x = j; x <= r; x++)
			temp[k++] = list[x];
	}
	//왼쪽 배열에 임시 배열로 추가할 수가 남았으면 왼쪽 배열을 임시 배열로 복사
	else
	{
		for (int x = i; x <= m; x++)
			temp[k++] = list[x];
	}

	//본 배열으로 복귀
	for (int x = l; x <= r; x++)
		list[x] = temp[x];
}
void merge_sort(int list[], int l, int r)
{
	int mid;
	if (l < r)
	{
		mid = (l + r) / 2;
		merge_sort(list, l, mid);
		merge_sort(list, mid + 1, r);
		merge(list, l, mid, r);
	}
}