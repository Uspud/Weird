#include <iostream>
#include <cmath>

int is_prime(int a) {       //�Ҽ� �Ǻ�. a�� �Ҽ��� �� 1, �Ҽ��� �ƴ� �� 0
    int count = 0;

    if(a == 1) return 0;
    
    for(int i = 2; i <= sqrt(a); i++) {
        if(a % i == 0) {
            count++;
        }
    }

    if(!count)  return 1;

    return 0;
}