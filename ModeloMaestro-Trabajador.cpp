#include <iostream>
#include <thread>
using namespace std;

// Función del trabajador
void trabajador(int numero) {
    cout << "Cuadrado de " << numero << ": " << numero * numero << endl;
}

int main() {
    int tareas[] = {3, 4, 5};

    for (int i = 0; i < 3; i++) {
        thread t(trabajador, tareas[i]);
        t.join();
    }
    return 0;
}