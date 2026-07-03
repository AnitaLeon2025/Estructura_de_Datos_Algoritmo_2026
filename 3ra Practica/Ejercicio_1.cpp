#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    int num;

    do {
        cout << "Ingrese un numero (-1 para finalizar): ";
        cin >> num;

        if (num != -1)
            pila.push(num);

    } while (num != -1);

    cout << "\nCantidad de elementos: " << pila.size() << endl;

    if (!pila.empty())
        cout << "Ultimo elemento ingresado: " << pila.top() << endl;

    return 0;
}
