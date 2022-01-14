#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // ����� ������ �ϱ�

using namespace std;

/*
����
���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� ���ǿ� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

���̰� ª�� �ͺ���
���̰� ������ ���� ������
�Է�
ù° �ٿ� �ܾ��� ���� N�� �־�����. (1 �� N �� 20,000) ��° �ٺ��� N���� �ٿ� ���� ���ĺ� �ҹ��ڷ� �̷���� �ܾ �� �ٿ� �ϳ��� �־�����. �־����� ���ڿ��� ���̴� 50�� ���� �ʴ´�.

���
���ǿ� ���� �����Ͽ� �ܾ���� ����Ѵ�. ��, ���� �ܾ ���� �� �Էµ� ��쿡�� �� ������ ����Ѵ�.
*/
bool compare(string a, string b) {
    int length = a.length();
    
    if(a.length() == b.length()) {
        for(int i = 0; i < length; i++) {
            if(a[i] != b[i]) {
                return a[i] < b[i];
            }
        }
    }

    return a.length() < b.length();
}

int main(void) {
    fastio;

    int N; cin >> N; int length[N];
    string word;
    vector<string> a;

    for(int i = 0; i < N; i++) {
        cin >> word;
        a.push_back(word);
    }


    sort(a.begin(), a.end(), compare);
    cout << a[0] << '\n';
    
    for (int i = 1; i < N; i++)
    {
        if(a[i] == a[i-1])  continue;
        cout << a[i] << '\n';
    }

    return 0;
}