#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;

//��ġ��
void merge(int list[], int l, int m, int r)
{
	int i, j, k;
	i = l;
	j = m + 1;
	k = l;
	int temp[1000000];
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

int main(void) {
    fastio;

    int n;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}