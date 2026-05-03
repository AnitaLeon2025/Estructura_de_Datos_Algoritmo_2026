#include <iostream>
#include <thread>
using namespace std;

// Función que suma una parte del arreglo
void sumaParcial(int arr[], int inicio, int fin, int &resultado) {
    resultado = 0;
    for (int i = inicio; i < fin; i++) {
        resultado += arr[i];
    }
}

int main() {
    int datos[] = {1, 2, 3, 4, 5, 6};
    int suma1, suma2;

    // Ejecución en paralelo
    thread t1(sumaParcial, datos, 0, 3, ref(suma1));
    thread t2(sumaParcial, datos, 3, 6, ref(suma2));

    t1.join();
    t2.join();

    cout << "Suma total: " << suma1 + suma2 << endl;
    return 0;
}
