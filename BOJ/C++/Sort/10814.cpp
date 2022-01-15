#include <iostream>
#include <algorithm>

#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

typedef struct member {
    int age;
    string name;
}   member;

bool compare(member a, member b) {
    return a.age < b.age;
}

int main(void) {
    int n; cin >> n;

    member member[n];

    for(int i = 0; i < n; i++) {
        cin >> member[i].age >> member[i].name;
    }

    stable_sort(member, member+n, compare);

    for(int i = 0; i < n; i++) {
        cout << member[i].age << " " << member[i].name << "\n";
    }

    return 0;
}