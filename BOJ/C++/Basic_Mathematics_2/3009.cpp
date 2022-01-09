#include <iostream>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);   // 입출력 빠르게 하기

using namespace std;

int main(void) {
    int location_x[4], location_y[4], x_redup, y_redup;

    for(int i = 0; i < 3; i++)  cin >> location_x[i] >> location_y[i];


    if(location_x[0] == location_x[1]) location_x[3] = location_x[2];
    else if(location_x[0] == location_x[2]) location_x[3] = location_x[1];
    else    location_x[3] = location_x[0];

    if(location_y[0] == location_y[1]) location_y[3] = location_y[2];
    else if(location_y[0] == location_y[2]) location_y[3] = location_y[1];
    else    location_y[3] = location_y[0];

    cout << location_x[3] << " " << location_y[3];

    return 0;
}