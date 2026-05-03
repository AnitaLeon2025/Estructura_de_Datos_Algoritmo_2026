#include <iostream>
#include <thread>
using namespace std;

// Función ejecutada por el primer hilo
void procesoUno() {
    for (int i = 0; i < 3; i++) {
        cout << "Proceso uno ejecutandose" << endl;
    }
}

// Función ejecutada por el segundo hilo
void procesoDos() {
    for (int i = 0; i < 3; i++) {
        cout << "Proceso dos ejecutandose" << endl;
    }
}

int main() {
    // Creación de dos hilos concurrentes
    thread hilo1(procesoUno);
    thread hilo2(procesoDos);

    // Esperar a que los hilos terminen
    hilo1.join();
    hilo2.join();

    return 0;
}
