#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

volatile int sum;

volatile int victim = 0;
volatile bool flag[2] = { false, false };

void p_lock(int myid) {
    int other = 1 - myid;
    flag[myid] = true;
    victim = myid;
    while((true == flag[other]) && victim == myid);
}
void p_unlock(int myid) {
    flag[myid] = false;
}

void task(int num_thread, int myid) {
    for(int i = 0; i < 50000000 / num_thread; i++) {
        p_lock(myid);
        sum += 2;
        p_unlock(myid);
    }
}

int main() {
    for(int num_thread = 1; num_thread <= 2; num_thread *= 2) {
        sum = 0;

        std::vector<std::thread> threads;
        auto start_time = std::chrono::high_resolution_clock::now();

        for(int i = 0; i < num_thread; i++)
            threads.emplace_back(task, num_thread, i);

        for(auto &th : threads) th.join();

        auto end_time = std::chrono::high_resolution_clock::now();
        threads.clear();
        auto exec_time = end_time - start_time;

        int exec_ms = std::chrono::duration_cast<std::chrono::milliseconds>(exec_time).count();
        std::cout << "Threads[ " << num_thread << "] , sum= " << sum;
        std::cout << ", Exec_time =" << exec_ms << " msecs\n";
    }

    return 0;
}