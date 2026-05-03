#include <iostream>
using namespace std;

int main() {
    // Declaración del arreglo de números
    int numeros[] = {4, 7, 10, 3, 8};
    
    // Variable para contar los números pares
    int contadorPares = 0;

    // Recorrido secuencial del arreglo
    for (int i = 0; i < 5; i++) {
        // Verifica si el número es divisible entre 2
        if (numeros[i] % 2 == 0) {
            contadorPares++;  // Incrementa el contador
        }
    }

    // Muestra el resultado final
    cout << "Cantidad de numeros pares: " << contadorPares << endl;
    return 0;
}
