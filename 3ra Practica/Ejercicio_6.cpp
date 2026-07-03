#include <iostream>
#include <queue>
using namespace std;

class Cliente {
public:
    string nombre;

    Cliente(string n) {
        nombre = n;
    }
};

int main() {
    queue<Cliente> cola;

    cola.push(Cliente("Miguel"));
    cola.push(Cliente("Ana"));
    cola.push(Cliente("Jhon"));

    if(!cola.empty()) {
        cout << "Cliente atendido: "
             << cola.front().nombre << endl;
        cola.pop();
    }

    cout << "\nClientes pendientes:\n";

    while(!cola.empty()) {
        cout << cola.front().nombre << endl;
        cola.pop();
    }

    return 0;
}
