#include <iostream>
#include <cmath>
#include <array>
#include <vector>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;

int is_prime(int a) {       //�Ҽ� �Ǻ�. a�� �Ҽ��� �� 1, �Ҽ��� �ƴ� �� 0
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

int* sieve_of_eratosthenes(int a[], int size) { // �Է����� �迭, �迭 ũ�⸦ ����
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
    if(start >= end) {          // ��Ұ� 1���� ���
        return;
    }

    int pivot = start;
    int i = pivot + 1;  // ���� ��� ����
    int j = end;    // ������ ��� ����
    int temp;

    while(i <= j) {
        // �����Ͱ� �������� ����
        while (i <= end && a[i] <= a[pivot]){
            i++;
        }
        while(j > start && a[j] >= a[pivot]) {
            j--;
        }

        if(i > j) {
            // i�� j���� ���������� �� ���
            temp = a[j];
            a[j] = a[pivot];
            a[pivot] = temp;
        }else{
            // i��°�� j��°�� ����
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    // ���� ���
    quick_sort(a, start, j-1);
    quick_sort(a, j + 1, end);
}

//��ġ��
void merge(int list[], int l, int m, int r)
{
	int i, j, k;
	i = l;
	j = m + 1;
	k = l;
	int temp[11];
	//���ʿ��� ���ĵ� �迭�� �����ʿ��� ���ĵ� �迭�� ��ħ
	//���� �ϳ��� ������ �ö� ���� ��ħ
	while (i <= m && j <= r)
	{
		if (list[i] <= list[j])
			temp[k++] = list[i++];
		else
			temp[k++] = list[j++];
	}
	//������ �迭�� �ӽ� �迭�� �߰��� ���� �������� ������ �迭�� �ӽ� �迭�� ����
	if (i > m)
	{
		for (int x = j; x <= r; x++)
			temp[k++] = list[x];
	}
	//���� �迭�� �ӽ� �迭�� �߰��� ���� �������� ���� �迭�� �ӽ� �迭�� ����
	else
	{
		for (int x = i; x <= m; x++)
			temp[k++] = list[x];
	}

	//�� �迭���� ����
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