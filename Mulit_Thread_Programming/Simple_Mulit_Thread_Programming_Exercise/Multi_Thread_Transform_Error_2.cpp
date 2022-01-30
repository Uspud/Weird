#include <iostream>
#include <thread>

int sum;

void task() {
    for(auto i = 0; i < 25000000; i++) sum += 1;
}

int main(void) {
    
    while(1) {
        sum = 0;

        std::thread t1{ task };
        std::thread t2{ task };

        t1.join();
        t2.join();

        std::cout << "Sum : " << sum << std::endl;
    }

    std::system("pause");

    return 0;
}