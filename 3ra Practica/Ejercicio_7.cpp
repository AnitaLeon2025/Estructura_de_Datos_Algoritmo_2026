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
    int op;
    string nombre;

    do {
        cout << "\n1. Agregar cliente";
        cout << "\n2. Atender cliente";
        cout << "\n3. Mostrar siguiente";
        cout << "\n4. Cantidad clientes";
        cout << "\n5. Salir";
        cout << "\nOpcion: ";
        cin >> op;

        switch(op) {
            case 1:
                cout << "Nombre: ";
                cin >> nombre;
                cola.push(Cliente(nombre));
                break;

            case 2:
                if(!cola.empty()) {
                    cout << "Atendido: "
                         << cola.front().nombre << endl;
                    cola.pop();
                }
                break;

            case 3:
                if(!cola.empty())
                    cout << "Siguiente: "
                         << cola.front().nombre << endl;
                break;

            case 4:
                cout << "Cantidad: "
                     << cola.size() << endl;
                break;
        }

    } while(op != 5);

    return 0;
}
