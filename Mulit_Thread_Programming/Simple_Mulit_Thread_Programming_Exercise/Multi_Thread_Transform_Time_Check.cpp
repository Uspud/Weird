#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <vector>

int sum;
std::mutex mylock;

void task(int num_thread) {
    for(auto i = 0; i < 50000000 / num_thread; i++) {
        mylock.lock();
        sum += 1;
        mylock.unlock();
    }
}

int main(void) {
    
    for(auto num_thread = 1; num_thread <= 16; num_thread *= 2) {
        sum = 0;

        std::vector<std::thread> threads;
        auto start_time = std::chrono::high_resolution_clock::now();

        for(int i = 0; i < num_thread; i++) {
            threads.emplace_back(task, num_thread);
        }

        for(auto &th : threads) th.join();

        auto end_time = std::chrono::high_resolution_clock::now();
        threads.clear();
        auto exec_time = end_time - start_time;

        int exec_ms = std::chrono::duration_cast<std::chrono::milliseconds>(exec_time).count();
        std::cout << "Threads[ " << num_thread << "], sum= " << sum;
        std::cout << ", Exec_time =" << exec_ms << " msecs\n";
    }

    std::system("pause");

    return 0;
}