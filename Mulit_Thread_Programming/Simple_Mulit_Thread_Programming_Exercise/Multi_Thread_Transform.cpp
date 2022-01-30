#include <iostream>
#include <thread>
#include <mutex>

int sum;
std::mutex mylock;

void task() {
    for(auto i = 0; i < 25000000; i++) {
        mylock.lock();
        sum += 1;
        mylock.unlock();
    }
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