#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> paginas;
    int op;
    string pagina;

    do {
        cout << "\n1. Visitar pagina";
        cout << "\n2. Retroceder";
        cout << "\n3. Mostrar pagina actual";
        cout << "\n4. Salir";
        cout << "\nOpcion: ";
        cin >> op;

        switch(op) {
            case 1:
                cout << "Pagina: ";
                cin >> pagina;
                paginas.push(pagina);
                break;

            case 2:
                if(!paginas.empty())
                    paginas.pop();
                break;

            case 3:
                if(!paginas.empty())
                    cout << "Actual: " << paginas.top() << endl;
                else
                    cout << "No hay paginas.\n";
                break;
        }

    } while(op != 4);

    return 0;
}
