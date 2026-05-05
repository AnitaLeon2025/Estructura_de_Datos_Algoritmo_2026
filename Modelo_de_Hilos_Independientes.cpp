#include <iostream>
#include <thread>
using namespace std;

void procesoA() {
    cout << "Proceso A activo" << endl;
}

void procesoB() {
    cout << "Proceso B activo" << endl;
}

int main() {
    thread h1(procesoA);
    thread h2(procesoB);

    h1.join();
    h2.join();
    return 0;
}
