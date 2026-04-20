#include <iostream>
using namespace std;

int main() {
    int op;
    double a, b;

    cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n";
    cout << "Elige una opcion: ";
    cin >> op;

    cout << "Ingresa dos numeros: ";
    cin >> a >> b;

    switch(op) {
        case 1: cout << "Resultado: " << a + b; break;
        case 2: cout << "Resultado: " << a - b; break;
        case 3: cout << "Resultado: " << a * b; break;
        case 4:
            if(b != 0) cout << "Resultado: " << a / b;
            else cout << "Error: division por cero";
            break;
        default: cout << "Opcion invalida";
    }

    return 0;
}