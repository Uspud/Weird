#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
#include <mutex>
#include <algorithm>
#include <atomic>

using namespace std;
using namespace chrono;

constexpr int MAX_THREAD = 16;

volatile int g_Sum;
mutex sum_lock;

atomic_bool* g_Flag;
atomic_int* g_Label;

int Max(int thread_num) {
    int maximum = g_Label[0];
    for(int i = 0; i < thread_num; i++) {
        if(maximum < g_Label[i])    maximum = g_Label[i];
    }

    return maximum;
}

int Compare(int i, int myId) {
    if (g_Label[i] < g_Label[myId]) return 1;
    else if (g_Label[i] > g_Label[myId]) return 0;
    else {
        if (i < myId)   return 1;
        else if (i > myId)  return 0;
        else    return 0;
    }
}

void b_lock(int myId, int thread_num) {
    g_Flag[myId] = true;

    g_Label[myId] = Max(thread_num) + 1;
    g_Flag[myId] = false;

    for(int i = 0; i < thread_num; i++) {
        while (g_Flag[i]);
        while ((g_Label[i] != 0) && Compare(i, myId));
    }
}

void b_unlock(int myId) {
    g_Label[myId] = 0;
}

void Process(int myId, int num_thread) {
    for(int i = 0; i < 10000'0000 / num_thread; i++) {
        //sum_lock.lock();
        //sum_lock.unlock();
        b_lock(myId, num_thread);
        g_Sum++;
        b_unlock(myId);
    }
}

int main(void) {
    for(int cnt = 1; cnt <= MAX_THREAD; cnt *= 2) {
        vector<thread> threads;

        g_Flag = new atomic_bool[cnt];
        g_Label = new atomic_int[cnt];
        for (int i = 0; i < cnt; i++) {
            g_Label[i] = 0;
            g_Flag[i] = false;
        }
        g_Sum = 0;

        auto start_t = high_resolution_clock::now();
        for (int i = 0; i < cnt; i++)
            threads.emplace_back(Process, i, cnt);

        for (auto& t : threads) t.join();

        auto end_t = high_resolution_clock::now();
        auto exec_time = end_t - start_t;

        cout << "Number of threads = " << cnt << ", ";
        cout << "Exec Time = " << duration_cast<milliseconds>(exec_time).count() << "ms , ";
        cout << "Sum = " << g_Sum << endl;
    }

    return 0;
}