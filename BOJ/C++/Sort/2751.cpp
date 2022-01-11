#include <iostream>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

//합치기
void merge(int list[], int l, int m, int r)
{
	int i, j, k;
	i = l;
	j = m + 1;
	k = l;
	int temp[1000000];
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