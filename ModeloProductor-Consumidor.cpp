#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
using namespace std;

queue<int> buffer;  // Buffer compartido
mutex mtx;          // Mutex para sincronización

void productor() {
    for (int i = 1; i <= 3; i++) {
        mtx.lock();
        buffer.push(i);
        cout << "Produciendo: " << i << endl;
        mtx.unlock();
    }
}

void consumidor() {
    for (int i = 1; i <= 3; i++) {
        mtx.lock();
        if (!buffer.empty()) {
            cout << "Consumiendo: " << buffer.front() << endl;
            buffer.pop();
        }
        mtx.unlock();
    }
}

int main() {
    thread p(productor);
    thread c(consumidor);

    p.join();
    c.join();
    return 0;
}
