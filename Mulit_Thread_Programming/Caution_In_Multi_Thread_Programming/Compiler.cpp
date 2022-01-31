#include <iostream>
#include <thread>

int message;
bool ready = false;

void recv() {
    while(false == ready) 
    std::cout << "I got " << message;
}

void send() {
    message = 999;
    ready = true;
}

int main() {
    std::thread receiver{ recv };
    std::thread sender{ send };

    receiver.join();
    sender.join();

    return 0;
}