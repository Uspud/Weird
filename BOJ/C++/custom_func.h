#include <iostream>
#include <cmath>

int is_prime(int a) {       //소수 판별. a가 소수일 시 1, 소수가 아닐 시 0
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