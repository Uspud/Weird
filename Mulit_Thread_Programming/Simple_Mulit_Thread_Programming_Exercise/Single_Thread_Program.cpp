#include <iostream>

int sum;

int main(void) {
    for(auto i = 0; i < 5000000; i++) sum += 1;
    std::cout << "Sum = " << sum << std::endl;

    return 0;
}